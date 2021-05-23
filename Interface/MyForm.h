#pragma once

#include <cstdio>
#include <fstream>
#include "TMatrix.h"
#include "AllMethods.h"
#include "MethodInside.h"
#include "MethodOutside.h"
#include "MPI.h"
#include "MSG.h"
#include "MessageBOX.h"

namespace Interface {

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
	MessageBOX^ message = gcnew MessageBOX;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
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

	protected:






	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;

	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::TabPage^ tabPage1;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Location = System::Drawing::Point(372, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(646, 245);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(372, 294);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(646, 270);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"v(x,y)", L"v2(x,y)", L"|v(x,y)-v2(x,y)|" });
			this->comboBox3->Location = System::Drawing::Point(10, 88);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(136, 30);
			this->comboBox3->TabIndex = 18;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"v(x,y)", L"u(v,y)", L"|v(x,y)-u(x,y)|" });
			this->comboBox2->Location = System::Drawing::Point(6, 88);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(136, 30);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button1
			//
			/*
			this->button1->Location = System::Drawing::Point(32, 796);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 26);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Показать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			*/
			// 
			// button4
			// 
			/*
			this->button4->Location = System::Drawing::Point(205, 795);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 26);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Показать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			*/
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(85, 770);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(169, 23);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Данные расчётов";
			// 
			// tabPage1
			// 
			this->tabPage1->AllowDrop = true;
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::PowderBlue;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(344, 613);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Постановка задачи";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(0, 614);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(155, 131);
			this->panel2->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 19);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Вывод таблицы";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(12, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 19);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Тестовая задача";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(31, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 35);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Решить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(161, 614);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(166, 131);
			this->panel1->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 19);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Вывод таблицы";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(8, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 19);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Основная задача";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(35, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 35);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(153, 559);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(166, 49);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Спец. параметры";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(-3, 551);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 22);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Выберите метод:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Метод сопряжённых градиентов", L"Метод простой итерации" });
			this->comboBox1->Location = System::Drawing::Point(1, 581);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 27);
			this->comboBox1->TabIndex = 22;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1, 408);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(282, 140);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальное приближение:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(0, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(222, 26);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Нулевое приближение";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(0, 98);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(102, 26);
			this->radioButton4->TabIndex = 14;
			this->radioButton4->Text = L"Среднее";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(0, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(195, 26);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->Text = L"Интерполяция по x";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(0, 78);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(195, 26);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->Text = L"Интерполяция по y";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(187, 366);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(96, 27);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"100";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(187, 266);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(96, 27);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"1000";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(186, 299);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(97, 27);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,00000001";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(187, 332);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 28);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(184, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Макс. число шагов:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 22);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Точность метода:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Разбиение по y:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1, 338);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Разбиение по х:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(327, 253);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Location = System::Drawing::Point(13, 4);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(352, 648);
			this->tabControl1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(1034, 577);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		//кнопка для тестовой задачи
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		int n, m;
		double temp;
		n = (int)Convert::ToDouble(textBox1->Text);
		m = (int)Convert::ToDouble(textBox2->Text);

		TVector<double> xBorder(2), yBorder(2);
		xBorder[0] = -1;
		xBorder[1] = 1;
		yBorder[0] = -1;
		yBorder[1] = 1;
		
		String ^methodname, ^interpolname = "использовано нулевое приближение";

		AllMethods *subject;
		switch (comboBox1->SelectedIndex)
		{
	
		case 0:
			subject = new MSG(n, m, xBorder, yBorder, 1);
			methodname = "метод сопряжённых градиентов";
			break;
		case 1:
			subject = new MPI(n, m, xBorder, yBorder, 1);
			methodname = "метод простой итерации";
			if (message->checkBox1->Checked)
				subject->Optimal(true);
			else
			{
				subject->Optimal(false);
				temp = Convert::ToDouble(message->textBox1->Text);
				subject->SetUserParametr(temp);
			}
			break;

		default:
			subject = new AllMethods(0, 0, 0, 0, 0);
		}

		double eps = Convert::ToDouble(textBox3->Text);
		int MaxIterations = (int)Convert::ToDouble(textBox4->Text);

		if (radioButton2->Checked)
		{
			subject->XInterpolation();
			interpolname = "использована интерполяция по x";
		}
		if (radioButton3->Checked)
		{
			subject->YInterpolation();
			interpolname = "использована интерполяция по y";
		}
		if (radioButton4->Checked)
		{
			subject->Average();
			interpolname = "использовано усреднение интерполяций по x и по y";
		}

		//Решаем задачу
		TVector<double> res = subject->MethodError(eps, MaxIterations);

		//Заполняем файл результатами работы программы
		ofstream file("ResTest.txt");
		for (int i = 0; i < res.Size(); i++)
			file << res[i] << endl;
		file.close();

		//Выводим данные в таблицу
		OutToDataGrid1("MainSolutE.txt");

		//Сохраняем параметр
		file.open("Parametr.txt");
		temp = subject->GetParametr();
		file << temp << endl;
		temp = comboBox1->SelectedIndex;
		file << temp << endl;
		file.close();

		String ^s;
		s = "Для решения тестовой задачи использована сетка с числом\n\n";
		s += "Разбиений по x: n = " + textBox1->Text + " и числом разбиений по y: m = " + textBox2->Text + "\n\n";
		s += "Применялся " + methodname + "\n\n";
		s += "Точность метода: eps = " + textBox3->Text + "\n\n";
		//s+="Параметр метода: ";
		s += "На решение затрачено N = " + Convert::ToString(res[1]) + "\n\n";
		s += "Достигнутая точность метода: " + Convert::ToString(res[0]) + "\n\n";
		s += "Тестовая задача решена с точностью: " + Convert::ToString(res[2]) + "\n\n";
		s += "В качестве начального приближения " + interpolname + "\n\n";
		s += "Евклидова норма невязки на вспомогательной сетке: " + Convert::ToString(res[3]) + "\n\n";
		s += "начальная евклидова норма невязки на вспомогательной сетке: " + Convert::ToString(res[10]) + "\n\n";

		MessageBox::Show(s, "Результаты решения тестовой задачи", MessageBoxButtons::OK);
		
	}
    //конец тестовой задачи











	//кнопка решения основной задачи
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		int n, m;
		double temp;
		n = (int)Convert::ToDouble(textBox1->Text);
		m = (int)Convert::ToDouble(textBox2->Text);
		
		TVector<double> xBorder(2), yBorder(2);
		xBorder[0] = -1;
		xBorder[1] = 1;
		yBorder[0] = -1;
		yBorder[1] = 1;

		String ^methodname, ^interpolname = "использовано нулевое приближение";

		AllMethods *subject;
		switch (comboBox1->SelectedIndex)
		{
	
		case 0:
			subject = new MSG(n, m, xBorder, yBorder, 4);
			methodname = "метод сопряжённых градиентов";
			break;
		case 1:
			subject = new MPI(n, m, xBorder, yBorder, 4);
			methodname = "метод простой итерации";
			if (message->checkBox1->Checked)
				subject->Optimal(true);
			else
			{
				subject->Optimal(false);
				temp = Convert::ToDouble(message->textBox1->Text);
				subject->SetUserParametr(temp);
			}
			break;
		default:
			subject = new AllMethods(0, 0, 0, 0, 0);
		}

		TVector<double> eps(2);
		TVector<int> MaxIterations(2);
		eps[0] = Convert::ToDouble(textBox3->Text);
		MaxIterations[0] = (int)Convert::ToDouble(textBox4->Text);
		eps[1] = eps[0];
		MaxIterations[1] = MaxIterations[0];

		char Name = 'Z';

		if (radioButton2->Checked)
		{
			subject->XInterpolation();
			interpolname = "использована интерполяция по x";
			Name = 'X';
		}
		if (radioButton3->Checked)
		{
			subject->YInterpolation();
			interpolname = "использована интерполяция по y";
			Name = 'Y';
		}
		if (radioButton4->Checked)
		{
			subject->Average();
			interpolname = "использовано усреднение интерполяций по x и по y";
			Name = 'A';
		}

		//Решаем задачу
		TVector<double> res = subject->MethodAccuracy(eps, MaxIterations, Name);

		//Заполняем файл результатами работы программы
		ofstream file("ResMain.txt");
		for (int i = 0; i < res.Size(); i++)
			file << res[i] << endl;
		file.close();

		//Выводим данные в таблицу
		OutToDataGrid2("MainSolutA.txt");

		//Сохраняем параметр
		file.open("Parametr.txt");
		temp = subject->GetParametr();
		file << temp << endl;
		temp = comboBox1->SelectedIndex;
		file << temp << endl;
		file.close();

		String ^s;
		s = "Для основной задачи использована сетка с числом\n\n";
		s += "Разбиений по x: n = " + textBox1->Text + " и числом разбиений по y: m = " + textBox2->Text + "\n\n";
		s += "Применялся " + methodname + "\n\n";
		s += "Точность метода: eps = " + textBox3->Text + "\n\n";
		//s+="Параметр метода: ";
		s += "На решение затрачено N = " + Convert::ToString(res[1]) + "\n\n";
		s += "Достигнутая точность метода: " + Convert::ToString(res[0]) + "\n\n";
		s += "При пересчёте задачи с половинным шагом затрачено N = " + Convert::ToString(res[3]) + " итераций \n\n";
		s += "и достигнута точность итерационного метода: " + Convert::ToString(res[2]) + "\n\n";
		s += "Максимальная разность двух приближений составила: " + Convert::ToString(res[4]) + "\n\n";
		s += "И соответствует узлу x = " + Convert::ToString(res[7]) + " y = " + Convert::ToString(res[8]) + "\n\n";
		s += "В качестве начального приближения " + interpolname + "\n\n";
		s += "Евклидова норма невязки на основной сетке: " + Convert::ToString(res[5]) + "\n\n";
		//s += "Норма бесконечности невязки на основной сетке: " + Convert::ToString(res[9]) + "\n\n";
		s += "начальная евклидова норма невязки на основной сетке: " + Convert::ToString(res[9]) + "\n\n";
		
		MessageBox::Show(s, "Результаты решения основной задачи", MessageBoxButtons::OK);

	}


	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//Тестовая
		String ^methodname, ^interpolname = "использовано нулевое приближение";

		switch (comboBox1->SelectedIndex)
		{
	
		case 0:
			methodname = "метод сопряжённых градиентов";
			break;
		case 1:
			methodname = "метод простой итерации";
			break;
		
		}

		if (radioButton2->Checked)
			interpolname = "использована интерполяция по x";
		if (radioButton3->Checked)
			interpolname = "использована интерполяция по y";
		if (radioButton4->Checked)
			interpolname = "использовано усреднение интерполяций по x и по y";

		ifstream file("ResTest.txt");
		TVector<double> res(10);
		for (int i = 0; i < 10; i++)
			file >> res[i];
		file.close();

		String ^s;
		s = "Для решения тестовой задачи использована сетка с числом\n\n";
		s += "Разбиений по x: n = " + textBox1->Text + " и числом разбиений по y: m = " + textBox2->Text + "\n\n";
		s += "Применялся " + methodname + "\n\n";
		s += "Точность метода: eps = " + textBox3->Text + "\n\n";
		//s+="Параметр метода: ";
		s += "На решение затрачено N = " + Convert::ToString(res[1]) + "\n\n";
		s += "Достигнутая точность метода: " + Convert::ToString(res[0]) + "\n\n";
		s += "Тестовая задача решена с точностью: " + Convert::ToString(res[2]) + "\n\n";
		s += "В качестве начального приближения " + interpolname + "\n\n";
		s += "Евклидова норма невязки на вспомогательной сетке: " + Convert::ToString(res[3]) + "\n\n";
		//s += "Норма бесконечности невязки на вспомогательной сетке: " + Convert::ToString(res[10]) + "\n\n";
		s += "начальная евклидова норма невязки на вспомогательной сетке: " + Convert::ToString(res[10]) + "\n\n";


		MessageBox::Show(s, "Результаты решения тестовой задачи", MessageBoxButtons::OK);
		
	}*/


	/*private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		//Основная
		String ^methodname, ^interpolname = "использовано нулевое приближение";

		switch (comboBox1->SelectedIndex)
		{
		
		case 0:
			methodname = "метод сопряжённых градиентов";
			break;
		case 1:
			methodname = "метод простой итерации";
			break;
	
		}

		if (radioButton2->Checked)
			interpolname = "использована интерполяция по x";
		if (radioButton3->Checked)
			interpolname = "использована интерполяция по y";
		if (radioButton4->Checked)
			interpolname = "использовано усреднение интерполяций по x и по y";

		ifstream file("ResMain.txt");
		TVector<double> res(9);
		for (int i = 0; i < 9; i++)
			file >> res[i];
		file.close();

		String ^s;
		s = "Для основной задачи использована сетка с числом\n\n";
		s += "Разбиений по x: n = " + textBox1->Text + " и числом разбиений по y: m = " + textBox2->Text + "\n\n";
		s += "Применялся " + methodname + "\n\n";
		s += "Точность метода: eps = " + textBox3->Text + "\n\n";
		//s+="Параметр метода: ";
		s += "На решение затрачено N = " + Convert::ToString(res[1]) + "\n\n";
		s += "Достигнутая точность метода: " + Convert::ToString(res[0]) + "\n\n";
		s += "При пересчёте задачи с половинным шагом затрачено N = " + Convert::ToString(res[3]) + " итераций \n\n";
		s += "и достигнута точность итерационного метода: " + Convert::ToString(res[2]) + "\n\n";
		s += "Максимальная разность двух приближений составила: " + Convert::ToString(res[4]) + "\n\n";
		s += "И соответствует узлу x = " + Convert::ToString(res[7]) + " y = " + Convert::ToString(res[8]) + "\n\n";
		s += "В качестве начального приближения " + interpolname + "\n\n";
		s += "Евклидова норма невязки на основной сетке: " + Convert::ToString(res[5]) + "\n\n";
		//s += "Норма бесконечности невязки на основной сетке: " + Convert::ToString(res[9]) + "\n\n";
		s += "начальная евклидова норма невязки на основной сетке: " + Convert::ToString(res[9]) + "\n\n";

		MessageBox::Show(s, "Результаты решения основной задачи", MessageBoxButtons::OK);
	}*/


	private: void OutToDataGrid1(string s)
	{
		ifstream file(s), results("ResTest.txt");
		int n, m, rar = 0, det = 1;

		TVector<double> xBorder(2), yBorder(2);
		double h, k;

		//Получаем количество разрядов, которое будет выводиться в таблицу
		//Получили погрешность решения
		for (int i = 0; i < 3; i++)
			results >> h;
		//Получили разряд
		while (h < 1)
		{
			rar++;
			h *= 10;
		}
		if (rar < 3)
			rar = 3;

		file >> n >> m;
		for (int i = 0; i < xBorder.Size(); i++)
			file >> xBorder[i];
		file >> h;
		for (int i = 0; i < yBorder.Size(); i++)
			file >> yBorder[i];
		file >> k;

		//Количество разрядов у 'x' и 'y'
		while ((n*pow(10, -det)) > 1)
		{
			det++;
		}
		if(det < 2)
			det = 2;

		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		for (int i = 0; i <= n + 1; i++)
		{
			DataGridViewColumn ^c = gcnew DataGridViewColumn();
			DataGridViewCell ^td = gcnew DataGridViewTextBoxCell(); //нельзя создать "абстрактную" DataGridViewCell
			c->HeaderText = " ";
			c->Name = "Column" + (dataGridView1->ColumnCount + 1);
			c->CellTemplate = td; //назначаем шаблон для ячейки, в нашем случае - ввод текста
			dataGridView1->Columns->Add(c);
		}
		dataGridView1->Rows->Add(m + 2);

		double x = xBorder[0], y = yBorder[0];

		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView1->Rows[0]->Cells[i]->Style->BackColor = Color::Cyan;
			dataGridView1->Rows[0]->Cells[i]->Value = round(x * pow(10, det)) / pow(10, det);
			x += h;
		}
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView1->Rows[j]->Cells[0]->Style->BackColor = Color::Cyan;
			dataGridView1->Rows[j]->Cells[0]->Value = round(y * pow(10, det)) / pow(10, det);
			y += k;
		}

		for (int j = m + 1; j >= 1; j--)
			for (int i = 1; i <= n + 1; i++)
			{
				file >> x;
				dataGridView1->Rows[j]->Cells[i]->Value = round(x * pow(10, rar)) / pow(10, rar);
			}
		file.close();

	}


	private: void OutToDataGrid2(string s)
	{
		ifstream file(s), results("ResMain.txt");
		int n, m, rar = 0, det = 1;
		TVector<double> xBorder(2), yBorder(2);
		double h, k;

		//Получаем количество разрядов, которое будет выводиться в таблицу
		//Получили погрешность решения
		for (int i = 0; i < 5; i++)
			results >> h;
		//Получили разряд
		while (h < 1)
		{
			rar++;
			h *= 10;
		}
		if (rar < 3)
			rar = 3;

		file >> n >> m;
		for (int i = 0; i < xBorder.Size(); i++)
			file >> xBorder[i];
		file >> h;
		for (int i = 0; i < yBorder.Size(); i++)
			file >> yBorder[i];
		file >> k;

		//Количество разрядов у 'x' и 'y'
		while ((n*pow(10, -det)) > 1)
		{
			det++;
		}
		if(det < 2)
			det = 2;

		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		for (int i = 0; i <= n + 1; i++)
		{
			DataGridViewColumn ^c = gcnew DataGridViewColumn();
			DataGridViewCell ^td = gcnew DataGridViewTextBoxCell(); //нельзя создать "абстрактную" DataGridViewCell
			c->HeaderText = " ";
			c->Name = "Column" + (dataGridView2->ColumnCount + 1);
			c->CellTemplate = td; //назначаем шаблон для ячейки, в нашем случае - ввод текста
			dataGridView2->Columns->Add(c);
		}
		dataGridView2->Rows->Add(m + 2);

		double x = xBorder[0], y = yBorder[0];

		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Style->BackColor = Color::Cyan;
			dataGridView2->Rows[0]->Cells[i]->Value = round(x * pow(10, det)) / pow(10, det);
			x += h;
		}
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView2->Rows[j]->Cells[0]->Style->BackColor = Color::Cyan;
			dataGridView2->Rows[j]->Cells[0]->Value = round(y * pow(10, det)) / pow(10, det);
			y += k;
		}

		for (int j = m + 1; j >= 1; j--)
			for (int i = 1; i <= n + 1; i++)
			{
				file >> x;
				dataGridView2->Rows[j]->Cells[i]->Value = round(x * pow(10, rar)) / pow(10, rar);
			}
		file.close();
	}
	
	
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		//Заполнение верхней таблицы (тестовая задача)
		switch (comboBox2->SelectedIndex)
		{
		case 0:
			OutToDataGrid1("MainSolutE.txt");
			break;
		case 1:
			OutToDataGrid1("SupSolutE.txt");
			break;
		case 2:
			OutToDataGrid1("DifferenceE.txt");
			break;
		}

	}
	
	
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		//Заполнение нижней таблицы (основная задача)
		switch (comboBox3->SelectedIndex)
		{
		case 0:
			OutToDataGrid2("MainSolutA.txt");
			break;
		case 1:
			OutToDataGrid2("SupSolutA.txt");
			break;
		case 2:
			OutToDataGrid2("DifferenceA.txt");
			break;
		}

	}
	

	
	


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		message->Show();
		double parametr;
		int tasknumber;
		ifstream file("Parametr.txt");
		file >> parametr;
		file >> tasknumber;
		file.close();

		message->textBox1->Visible = false;
		message->label2->Visible = false;
		message->label3->Visible = false;
		message->label4->Visible = false;
		message->checkBox1->Visible = false;
		message->checkBox2->Visible = false;
		message->textBox1->ReadOnly = false;

		switch (comboBox1->SelectedIndex)
		{
		
		case 1:
			message->label4->Text = "Параметр Tau метода: ";
			message->textBox1->Text = Convert::ToString(1e-5);
			message->label4->Visible = true;
			message->textBox1->Visible = true;
			message->checkBox1->Visible = true;
			if(message->checkBox1->Checked)
				message->textBox1->ReadOnly = true;
			break;
		
		default:
			message->label2->Visible = true;
		}
		if (tasknumber == comboBox1->SelectedIndex)
			message->textBox1->Text = Convert::ToString(parametr);

	}


	private: void ChangeFile(string InicialData, string FinalData)
	{
		int n, m;
		TVector<double> xBorder(2), yBorder(2);
		double x, y, h, k, temp;
		ofstream Final(FinalData);
		ifstream Inicial(InicialData);

		Inicial >> n >> m;

		//Команды для gnuplot
		ofstream com("commands.txt");
		com << "set terminal wxt persist\n";
		com << "set dgrid3d " << n + 1 << " " << m + 1 << endl;
		com << "splot 'C:\\Users\\HOME\\source\\repos\\Interface\\Interface\\Graph.txt' with pm3d \n";
		com << "pause -1\n";
		com.close();

		for (int i = 0; i < xBorder.Size(); i++)
			Inicial >> xBorder[i];
		Inicial >> h;

		for (int i = 0; i < yBorder.Size(); i++)
			Inicial >> yBorder[i];
		Inicial >> k;

		y = yBorder[0];
		for (int j = 0; j <= m; j++)
		{
			x = xBorder[0];
			for (int i = 0; i <= n; i++)
			{
				Inicial >> temp;
				Final << x << " " << y << " " << temp << endl;
				x += h;
			}
			y += k;
		}
		Inicial.close();
		Final.close();
	}
	
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		ofstream file("Parametr.txt");
		file << endl;

	}
	
	
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
