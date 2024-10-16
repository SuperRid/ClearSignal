#pragma once
#include <cmath>
namespace SignaLazarus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DefaultParams();
			tbA1->Text = Convert::ToString(A1);
			tbA2->Text = Convert::ToString(A2);
			tbA3->Text = Convert::ToString(A3);
			tbf1->Text = Convert::ToString(f1);
			tbf2->Text = Convert::ToString(f2);
			tbf3->Text = Convert::ToString(f3);
			tbphi1->Text = Convert::ToString(phi1 / pi);
			tbphi2->Text = Convert::ToString(phi2 / pi);
			tbphi3->Text = Convert::ToString(phi3 / pi);
			tbN->Text = Convert::ToString(N);
			tbfd->Text = Convert::ToString(fd);
			tba->Text = Convert::ToString(a);
			tbg->Text = Convert::ToString(g);
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ запускToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbA1;
	private: System::Windows::Forms::TextBox^ tbA2;
	private: System::Windows::Forms::TextBox^ tbA3;
	private: System::Windows::Forms::TextBox^ tbf3;



	private: System::Windows::Forms::TextBox^ tbf2;

	private: System::Windows::Forms::TextBox^ tbf1;
	private: System::Windows::Forms::TextBox^ tbphi3;


	private: System::Windows::Forms::TextBox^ tbphi2;
	private: System::Windows::Forms::TextBox^ tbphi1;




	private: System::Windows::Forms::TextBox^ tbfd;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbN;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ tba;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tbg;
	private: System::Windows::Forms::Label^ label16;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->запускToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbA1 = (gcnew System::Windows::Forms::TextBox());
			this->tbA2 = (gcnew System::Windows::Forms::TextBox());
			this->tbA3 = (gcnew System::Windows::Forms::TextBox());
			this->tbf3 = (gcnew System::Windows::Forms::TextBox());
			this->tbf2 = (gcnew System::Windows::Forms::TextBox());
			this->tbf1 = (gcnew System::Windows::Forms::TextBox());
			this->tbphi3 = (gcnew System::Windows::Forms::TextBox());
			this->tbphi2 = (gcnew System::Windows::Forms::TextBox());
			this->tbphi1 = (gcnew System::Windows::Forms::TextBox());
			this->tbfd = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbN = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->tba = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbg = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->запускToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// запускToolStripMenuItem
			// 
			this->запускToolStripMenuItem->Name = L"запускToolStripMenuItem";
			this->запускToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->запускToolStripMenuItem->Text = L"Запуск";
			this->запускToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::запускToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"A1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(18, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"A3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(18, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"A2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(18, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"f1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(18, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"f2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(18, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"f3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(18, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"φ1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(18, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 25);
			this->label8->TabIndex = 8;
			this->label8->Text = L"φ2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(18, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 25);
			this->label9->TabIndex = 9;
			this->label9->Text = L"φ3";
			// 
			// tbA1
			// 
			this->tbA1->Location = System::Drawing::Point(90, 45);
			this->tbA1->Name = L"tbA1";
			this->tbA1->Size = System::Drawing::Size(100, 28);
			this->tbA1->TabIndex = 10;
			// 
			// tbA2
			// 
			this->tbA2->Location = System::Drawing::Point(90, 90);
			this->tbA2->Name = L"tbA2";
			this->tbA2->Size = System::Drawing::Size(100, 28);
			this->tbA2->TabIndex = 11;
			// 
			// tbA3
			// 
			this->tbA3->Location = System::Drawing::Point(90, 135);
			this->tbA3->Name = L"tbA3";
			this->tbA3->Size = System::Drawing::Size(100, 28);
			this->tbA3->TabIndex = 12;
			// 
			// tbf3
			// 
			this->tbf3->Location = System::Drawing::Point(90, 135);
			this->tbf3->Name = L"tbf3";
			this->tbf3->Size = System::Drawing::Size(100, 28);
			this->tbf3->TabIndex = 15;
			// 
			// tbf2
			// 
			this->tbf2->Location = System::Drawing::Point(90, 90);
			this->tbf2->Name = L"tbf2";
			this->tbf2->Size = System::Drawing::Size(100, 28);
			this->tbf2->TabIndex = 14;
			// 
			// tbf1
			// 
			this->tbf1->Location = System::Drawing::Point(90, 45);
			this->tbf1->Name = L"tbf1";
			this->tbf1->Size = System::Drawing::Size(100, 28);
			this->tbf1->TabIndex = 13;
			// 
			// tbphi3
			// 
			this->tbphi3->Location = System::Drawing::Point(90, 135);
			this->tbphi3->Name = L"tbphi3";
			this->tbphi3->Size = System::Drawing::Size(46, 28);
			this->tbphi3->TabIndex = 18;
			// 
			// tbphi2
			// 
			this->tbphi2->Location = System::Drawing::Point(90, 90);
			this->tbphi2->Name = L"tbphi2";
			this->tbphi2->Size = System::Drawing::Size(46, 28);
			this->tbphi2->TabIndex = 17;
			// 
			// tbphi1
			// 
			this->tbphi1->Location = System::Drawing::Point(90, 45);
			this->tbphi1->Name = L"tbphi1";
			this->tbphi1->Size = System::Drawing::Size(46, 28);
			this->tbphi1->TabIndex = 16;
			// 
			// tbfd
			// 
			this->tbfd->Location = System::Drawing::Point(90, 45);
			this->tbfd->Name = L"tbfd";
			this->tbfd->Size = System::Drawing::Size(100, 28);
			this->tbfd->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(18, 45);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 25);
			this->label10->TabIndex = 21;
			this->label10->Text = L"fd";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(18, 45);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 25);
			this->label11->TabIndex = 22;
			this->label11->Text = L"N";
			// 
			// tbN
			// 
			this->tbN->Location = System::Drawing::Point(90, 45);
			this->tbN->Name = L"tbN";
			this->tbN->Size = System::Drawing::Size(100, 28);
			this->tbN->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(140, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 32);
			this->label12->TabIndex = 25;
			this->label12->Text = L"𝝅";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(140, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 32);
			this->label13->TabIndex = 26;
			this->label13->Text = L"𝝅";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(140, 130);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 32);
			this->label14->TabIndex = 27;
			this->label14->Text = L"𝝅";
			// 
			// chart1
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisX->Title = L"t";
			chartArea1->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea1->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea1->AxisY->Title = L"x";
			chartArea1->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(-34, 31);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Сигнал с шумом";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Blue;
			series2->Legend = L"Legend1";
			series2->Name = L"Сигнал";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series3->Color = System::Drawing::Color::Yellow;
			series3->Enabled = false;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(992, 300);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"Исходный сигнал";
			this->chart1->Titles->Add(title1);
			// 
			// chart2
			// 
			chartArea2->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea2->AxisX->Title = L"f";
			chartArea2->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->AxisX->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea2->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea2->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea2->AxisY->Title = L"A";
			chartArea2->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->AxisY->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(-34, 337);
			this->chart2->Name = L"chart2";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Red;
			series5->Legend = L"Legend1";
			series5->Name = L"Series2";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"Series3";
			this->chart2->Series->Add(series4);
			this->chart2->Series->Add(series5);
			this->chart2->Series->Add(series6);
			this->chart2->Size = System::Drawing::Size(992, 300);
			this->chart2->TabIndex = 30;
			this->chart2->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"Спектр";
			this->chart2->Titles->Add(title2);
			// 
			// chart3
			// 
			chartArea3->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea3->AxisX->Title = L"t";
			chartArea3->AxisX->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisX->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea3->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Lines;
			chartArea3->AxisY->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			chartArea3->AxisY->Title = L"x";
			chartArea3->AxisY->TitleAlignment = System::Drawing::StringAlignment::Far;
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY->TitleForeColor = System::Drawing::Color::IndianRed;
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(-34, 643);
			this->chart3->Name = L"chart3";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(992, 300);
			this->chart3->TabIndex = 31;
			this->chart3->Text = L"chart3";
			title3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"Восстановленный сигнал";
			this->chart3->Titles->Add(title3);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tbA1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->tbA2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbA3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1023, 47);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 190);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Амлитуда ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->tbf1);
			this->groupBox2->Controls->Add(this->tbf2);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->tbf3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(1300, 47);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(240, 190);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Частота";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tbphi1);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->tbphi2);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->tbphi3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(1587, 47);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(240, 190);
			this->groupBox3->TabIndex = 34;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Фаза";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tbfd);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(1023, 284);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(265, 100);
			this->groupBox4->TabIndex = 35;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Частота дискретизации";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->tbN);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(1340, 284);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 100);
			this->groupBox5->TabIndex = 36;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Кол-во отсчетов";
			// 
			// tba
			// 
			this->tba->Location = System::Drawing::Point(1088, 421);
			this->tba->Name = L"tba";
			this->tba->Size = System::Drawing::Size(100, 22);
			this->tba->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1041, 417);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 25);
			this->label15->TabIndex = 22;
			this->label15->Text = L"a";
			// 
			// tbg
			// 
			this->tbg->Location = System::Drawing::Point(1088, 472);
			this->tbg->Name = L"tbg";
			this->tbg->Size = System::Drawing::Size(100, 22);
			this->tbg->TabIndex = 37;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1041, 469);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 25);
			this->label16->TabIndex = 38;
			this->label16->Text = L"ɣ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->tbg);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tba);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->ImeMode = System::Windows::Forms::ImeMode::On;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion

	private: System::Void запускToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		   void Signal();
		   void CleanSignal();
		   void DefaultParams();
		   
		   double En, Es, Esum;
		   double Enow;
		   double* clear;
		   double* A;
		   double* noise;
		   double A1, A2, A3, f1, f2, f3, phi1, phi2, phi3,t,fd,maxf,a,b,g;
		   static double pi;
		   long N,th;
		 
	};

	class cmplx
	{
	public:
		double re;
		double im;
		cmplx() { re = im = 0.; }
		cmplx(double x, double y) { re = x; im = y; }
		friend cmplx operator * (cmplx& x, cmplx& y)
		{
			cmplx z;
			z.re = x.re * y.re - x.im * y.im;
			z.im = x.re * y.im + y.re * x.im;
			return z;
		}
		friend cmplx operator + (cmplx& x, cmplx& y)
		{
			cmplx z;
			z.re = x.re + y.re;
			z.im = x.im + y.im;
			return z;
		}
		friend cmplx operator - (cmplx& x, cmplx& y)
		{
			cmplx z;
			z.re = x.re - y.re;
			z.im = x.im - y.im;
			return z;
		}
	};

	 void fourea(long v_size, cmplx* F, double is);

}
