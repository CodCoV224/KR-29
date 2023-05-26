#pragma once

namespace kr29 {

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
	private: System::Windows::Forms::Button^ button1;


	protected:

	private: System::Windows::Forms::TrackBar^ sizePasswordTrackBar;
	private: System::Windows::Forms::TrackBar^ quantityPasswordTrackBar;



	private: System::Windows::Forms::Label^ sizePasswordLable;
	private: System::Windows::Forms::Label^ quantityPasswordLable;
	private: System::Windows::Forms::CheckBox^ numbersCheckBox;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sizePasswordTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->quantityPasswordTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->sizePasswordLable = (gcnew System::Windows::Forms::Label());
			this->quantityPasswordLable = (gcnew System::Windows::Forms::Label());
			this->numbersCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizePasswordTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantityPasswordTrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(157, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Сгенерировать Пароль";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sizePasswordTrackBar
			// 
			this->sizePasswordTrackBar->Location = System::Drawing::Point(12, 28);
			this->sizePasswordTrackBar->Maximum = 40;
			this->sizePasswordTrackBar->Minimum = 1;
			this->sizePasswordTrackBar->Name = L"sizePasswordTrackBar";
			this->sizePasswordTrackBar->Size = System::Drawing::Size(276, 56);
			this->sizePasswordTrackBar->TabIndex = 1;
			this->sizePasswordTrackBar->Value = 1;
			// 
			// quantityPasswordTrackBar
			// 
			this->quantityPasswordTrackBar->Location = System::Drawing::Point(12, 111);
			this->quantityPasswordTrackBar->Maximum = 12;
			this->quantityPasswordTrackBar->Minimum = 1;
			this->quantityPasswordTrackBar->Name = L"quantityPasswordTrackBar";
			this->quantityPasswordTrackBar->Size = System::Drawing::Size(276, 56);
			this->quantityPasswordTrackBar->TabIndex = 2;
			this->quantityPasswordTrackBar->Value = 1;
			// 
			// sizePasswordLable
			// 
			this->sizePasswordLable->AutoSize = true;
			this->sizePasswordLable->Location = System::Drawing::Point(84, 9);
			this->sizePasswordLable->Name = L"sizePasswordLable";
			this->sizePasswordLable->Size = System::Drawing::Size(109, 16);
			this->sizePasswordLable->TabIndex = 4;
			this->sizePasswordLable->Text = L"Длинна пароля:";
			// 
			// quantityPasswordLable
			// 
			this->quantityPasswordLable->AutoSize = true;
			this->quantityPasswordLable->Location = System::Drawing::Point(62, 92);
			this->quantityPasswordLable->Name = L"quantityPasswordLable";
			this->quantityPasswordLable->Size = System::Drawing::Size(144, 16);
			this->quantityPasswordLable->TabIndex = 5;
			this->quantityPasswordLable->Text = L"Количество паролей";
			// 
			// numbersCheckBox
			// 
			this->numbersCheckBox->AutoSize = true;
			this->numbersCheckBox->Checked = true;
			this->numbersCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->numbersCheckBox->Location = System::Drawing::Point(12, 173);
			this->numbersCheckBox->Name = L"numbersCheckBox";
			this->numbersCheckBox->Size = System::Drawing::Size(47, 20);
			this->numbersCheckBox->TabIndex = 3;
			this->numbersCheckBox->Text = L"0-9";
			this->numbersCheckBox->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 199);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(50, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"A-Z";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(65, 199);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(47, 20);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"a-z";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(65, 173);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(71, 20);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"$%*-_#";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(408, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Ваши пароли";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(311, 33);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(283, 183);
			this->textBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(267, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"40";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(267, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"12";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(601, 224);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->numbersCheckBox);
			this->Controls->Add(this->quantityPasswordLable);
			this->Controls->Add(this->sizePasswordLable);
			this->Controls->Add(this->quantityPasswordTrackBar);
			this->Controls->Add(this->sizePasswordTrackBar);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizePasswordTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantityPasswordTrackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
