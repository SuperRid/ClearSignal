#include "MyForm.h"
#include <cstdlib> 
#include <ctime>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    SignaLazarus::MyForm form;
    Application::Run(% form);
}

System::Void SignaLazarus::MyForm::запускToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->chart1->Series[0]->Points->Clear();
    this->chart1->Series[1]->Points->Clear();
    this->chart1->Series[2]->Points->Clear();
    this->chart2->Series[0]->Points->Clear();
    this->chart2->Series[2]->Points->Clear();
	chart1->ChartAreas[0]->AxisX->Minimum = 0;
    chart2->ChartAreas[0]->AxisX->Minimum = 0;

	if (tbA1->Text != "" || tbA2->Text != "" || tbA3->Text != "" || tbf1->Text != "" || tbf2->Text != ""|| tbf3->Text != "" 
		|| tbphi1->Text != "" || tbphi2->Text != "" || tbphi3->Text != "" || tbN->Text != "" || tbfd->Text != "" || tba->Text != "" || tbg->Text != "")
	{
		A1 = Convert::ToDouble(tbA1->Text);
		A2 = Convert::ToDouble(tbA2->Text);
		A3 = Convert::ToDouble(tbA3->Text);
		f1 = Convert::ToDouble(tbf1->Text);
		f2 = Convert::ToDouble(tbf2->Text);
		f3 = Convert::ToDouble(tbf3->Text);
		phi1 = pi * Convert::ToDouble(tbphi1->Text);
		phi2 = pi * Convert::ToDouble(tbphi2->Text);
		phi3 = pi * Convert::ToDouble(tbphi3->Text);
		N = Convert::ToInt32(tbN->Text);
		fd = Convert::ToInt32(tbfd->Text);
        a = Convert::ToDouble(tba->Text);
        g = Convert::ToDouble(tbg->Text);
	}
	Signal();
}

void SignaLazarus::MyForm::Signal()
{
    t = 0;
    clear = new double[N + 1];
    cmplx* spktr = new cmplx[N + 1];
    int* n = new int[N + 1];
    noise = new double[N + 1];
    A = new double[N + 1];
    Es,En, Esum = 0; 
    b = 0;

    for (int i = 0; i <= N; i++)
    {
        n[i] = 0; // Сброс значения n[i]
        for (int j = 0; j < 12; j++)
        {
            int random_num = rand() % RAND_MAX - RAND_MAX/2.;
            n[i] += random_num;  
        }
        En += pow(n[i], 2); 

        clear[i] = A1 * sin(2 * pi * f1 * t + phi1) + A2 * sin(2 * pi * f2 * t + phi2) + A3 * sin(2 * pi * f3 * t + phi3);
        Es += pow(clear[i], 2);
    }

    b = sqrt(a * Es / En);
    for (int i = 0; i <= N; i++)
    {
        noise[i] = b * n[i];
        clear[i] = A1 * sin(2 * pi * f1 * t + phi1) + A2 * sin(2 * pi * f2 * t + phi2) + A3 * sin(2 * pi * f3 * t + phi3);
        t = i / fd;
        this->chart1->Series[0]->Points->AddXY(t, clear[i] + noise[i]);
        this->chart1->Series[1]->Points->AddXY(t, clear[i]);
        //this->chart1->Series[2]->Points->AddXY(t, noise[i]);
    }

    
    // Подготовка массива cmplx для FFT
    for (int i = 0; i <= N; i++)
    {
        spktr[i] = cmplx(clear[i] + noise[i], 0.0);
    }

    fourea(N, spktr, -1); // Прямое преобразование

    t = 0;
    for (int i = 0; i <= N; i++)
    {
        t = i * fd / N;
        A[i] = sqrt(spktr[i].re * spktr[i].re + spktr[i].im * spktr[i].im);
        Esum += pow(A[i], 2);
        this->chart2->Series[0]->Points->AddXY(t, A[i]);
        //this->chart2->Series[2]->Points->AddXY(t, A[i]);
    }

    CleanSignal();

    delete[] clear;
    delete[] spktr;
    delete[] A;
    delete[] n; 
}

void SignaLazarus::MyForm::CleanSignal()
{
    int i = 0;
    th = 0;
    Enow = 0;
    for (i = 0; i < N; i++)
    {
        Enow += pow(A[i],2) + pow(A[N - i],2);
        if (Enow > g * Esum)
        {
            th = i+1;
            break;
        }
    }

    for (i = th; i < N - th; i++)
    {
        A[i] = 0;
    }
    for (i = 0; i < N; i++)
    {
        t = i * fd / N;
        this->chart2->Series[2]->Points->AddXY(t, A[i]);
    }
   

}


void SignaLazarus::fourea(long v_size, cmplx* F, double is)
{
    cmplx temp, w, c;
    long i, i1, j, j1, istep;
    long m, mmax;
    long n = v_size;
    double fn, r1, theta;
    fn = (double)n;
    double r = 4 * atan(1)* is;
    j = 1;
    for (i = 1; i <= n; i++)
    {
        i1 = i - 1;
        if (i < j)
        {
            j1 = j - 1;
            temp = F[j1];
            F[j1] = F[i1];
            F[i1] = temp;
        }
        m = n / 2;
        while (j > m) { j -= m; m = (m + 1) / 2; }
        j += m;
    }
    mmax = 1;
    while (mmax < n)
    {
        istep = 2 * mmax;
        r1 = r / (double)mmax;
        for (m = 1; m <= mmax; m++)
        {
            theta = r1 * (double)(m - 1);
            w = cmplx(cos(theta), sin(theta));
            for (i = m - 1; i < n; i += istep)
            {
                j = i + mmax;
                c = F[j];
                temp = w * c;
                F[j] = F[i] - temp;
                F[i] = F[i] + temp;
            }
        }
        mmax = istep;
    }
}


void SignaLazarus::MyForm::DefaultParams()
{
	pi = 4 * atan(1);
    A1 = 10;
    A2 = 2;
    A3 = 5;
    f1 = 20;
    f2 = 10;
    f3 = 15;
    phi1 = 0;
    phi2 = pi/2;
    phi3 = 4*pi;
	N = 256;
	fd = 100;
    a = 0.8;
    g = 1/(1+a);

    srand(time(0));
}
