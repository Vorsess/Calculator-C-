#pragma once
#include <cmath>

namespace Calculator {

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
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btn_result;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btn_add;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_min;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_mult;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ procent;

	private: System::Windows::Forms::Button^ kvadrat;

	private: System::Windows::Forms::Button^ koren;


	protected:

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
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_result = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->procent = (gcnew System::Windows::Forms::Button());
			this->kvadrat = (gcnew System::Windows::Forms::Button());
			this->koren = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::Red;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(2, 3);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(25, 27);
			this->btn_close->TabIndex = 0;
			this->btn_close->Text = L"X";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 65);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(14, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AC";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btn_AC);
			// 
			// btn_result
			// 
			this->btn_result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_result->Location = System::Drawing::Point(146, 112);
			this->btn_result->Name = L"btn_result";
			this->btn_result->Size = System::Drawing::Size(126, 60);
			this->btn_result->TabIndex = 4;
			this->btn_result->Text = L"=";
			this->btn_result->UseVisualStyleBackColor = false;
			this->btn_result->Click += gcnew System::EventHandler(this, &MyForm::btn_result_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Cyan;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(14, 178);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Cyan;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(80, 178);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Cyan;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(144, 178);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Yellow;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->Location = System::Drawing::Point(210, 178);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Cyan;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(14, 244);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 10;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Cyan;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(78, 244);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Cyan;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(144, 244);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::Yellow;
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->Location = System::Drawing::Point(210, 244);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Cyan;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(14, 310);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 60);
			this->button13->TabIndex = 14;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Cyan;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(80, 310);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 60);
			this->button14->TabIndex = 15;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(146, 310);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 60);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::Yellow;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->Location = System::Drawing::Point(212, 310);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 17;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Silver;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(14, 376);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(60, 60);
			this->button17->TabIndex = 18;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::btn_point_click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Cyan;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(80, 376);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(60, 60);
			this->button18->TabIndex = 19;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btn_num_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Silver;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(146, 376);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(60, 60);
			this->button19->TabIndex = 20;
			this->button19->Text = L"+/-";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btn_znak_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::Yellow;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->Location = System::Drawing::Point(212, 376);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 21;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// procent
			// 
			this->procent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->procent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procent->Location = System::Drawing::Point(14, 442);
			this->procent->Name = L"procent";
			this->procent->Size = System::Drawing::Size(60, 60);
			this->procent->TabIndex = 22;
			this->procent->Text = L"%";
			this->procent->UseVisualStyleBackColor = false;
			this->procent->Click += gcnew System::EventHandler(this, &MyForm::btn_procant);
			// 
			// kvadrat
			// 
			this->kvadrat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->kvadrat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->kvadrat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->kvadrat->Location = System::Drawing::Point(80, 442);
			this->kvadrat->Name = L"kvadrat";
			this->kvadrat->Size = System::Drawing::Size(60, 60);
			this->kvadrat->TabIndex = 23;
			this->kvadrat->Text = L"^2";
			this->kvadrat->UseVisualStyleBackColor = false;
			this->kvadrat->Click += gcnew System::EventHandler(this, &MyForm::btn_kvadrat);
			// 
			// koren
			// 
			this->koren->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->koren->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->koren->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->koren->Location = System::Drawing::Point(146, 442);
			this->koren->Name = L"koren";
			this->koren->Size = System::Drawing::Size(60, 60);
			this->koren->TabIndex = 24;
			this->koren->Text = L"√x";
			this->koren->UseVisualStyleBackColor = false;
			this->koren->Click += gcnew System::EventHandler(this, &MyForm::btn_koren);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(284, 509);
			this->Controls->Add(this->koren);
			this->Controls->Add(this->kvadrat);
			this->Controls->Add(this->procent);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_result);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void btn_num_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ btn = safe_cast<Button^>(sender);
		if (this->label1->Text == "0")
			this->label1->Text = btn->Text;
		else
			this->label1->Text = this->label1->Text + btn->Text;
	}
	private: double num1;
	private: char op;
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->op = '-';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->op = '*';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->op = '/';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
private: System::Void btn_result_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double num2 = System::Convert::ToDouble(this->label1->Text);
		double res = 0.0;
		switch (this->op)
		{
		case ('+'): res = this->num1 + num2; break;
		case ('-'): res = this->num1 - num2; break;
		case ('*'): res = this->num1 * num2; break;
		case ('/'):
			if (num2 == 0.0)
				MessageBox::Show("Деления на 0!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				res = this->num1 / num2;
			break;
		case ('%'): res = this->num1 * num2 / 100; break;
		case ('2'): res = this->num1 * this->num1; break;
		case ('x'): res = sqrt(this->num1); break;
		}
		this->label1->Text = System::Convert::ToString(res);
	}
private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->op = '+';
		this->num1 = System::Convert::ToDouble(this->label1->Text);
		this->label1->Text = "0";
	}
private: System::Void btn_AC(System::Object^ sender, System::EventArgs^ e) 
	{
		this->label1->Text = "0";
		this->op = ' ';
	}
private: System::Void btn_znak_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->label1->Text = System::Convert::ToString(System::Convert::ToInt32(this->label1->Text) * -1);
	}
private: System::Void btn_point_click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (!this->label1->Text->Contains(",")) this->label1->Text = this->label1->Text + ",";
	}
private: System::Void btn_procant(System::Object^ sender, System::EventArgs^ e) 
	{
	this->op = '%';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	this->label1->Text = "0";
	}
private: System::Void btn_kvadrat(System::Object^ sender, System::EventArgs^ e) 
	{
	this->op = '2';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	}
private: System::Void btn_koren(System::Object^ sender, System::EventArgs^ e) 
	{
	this->op = 'x';
	this->num1 = System::Convert::ToDouble(this->label1->Text);
	}
}
	; }
