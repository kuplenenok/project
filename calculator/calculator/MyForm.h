#pragma once
#include<string>

namespace calculator {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxEuro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxDollar;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxEuro = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxDollar = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(69, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"С";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(325, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Курс Евро";
			// 
			// textBoxEuro
			// 
			this->textBoxEuro->Location = System::Drawing::Point(459, 44);
			this->textBoxEuro->Name = L"textBoxEuro";
			this->textBoxEuro->Size = System::Drawing::Size(84, 22);
			this->textBoxEuro->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(325, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Курс Доллара";
			// 
			// textBoxDollar
			// 
			this->textBoxDollar->Location = System::Drawing::Point(459, 77);
			this->textBoxDollar->Name = L"textBoxDollar";
			this->textBoxDollar->Size = System::Drawing::Size(84, 22);
			this->textBoxDollar->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"В Рублях";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(249, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"В Долларах";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(471, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"В Евро";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(440, 222);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(108, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(240, 222);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(108, 22);
			this->textBox3->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(204, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 66);
			this->button2->TabIndex = 0;
			this->button2->Text = L"=";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(113, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 66);
			this->button3->TabIndex = 0;
			this->button3->Text = L"<-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(182, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(392, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(581, 352);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxDollar);
			this->Controls->Add(this->textBoxEuro);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBoxEuro->Text = "";
		textBoxDollar->Text = "";
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {

		String^ temp = textBox1->Text;
		textBox1->Text = "";
		for (int i = 0; i < textBox1->Text->Length - 1; i++) {
			textBox1->Text += temp[i];
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double dollar = Convert::ToDouble(textBoxDollar->Text);
	double euro = Convert::ToDouble(textBoxEuro->Text);
	double ruble = Convert::ToDouble(textBox1->Text);
	dollar = ruble / dollar;
	euro = ruble / euro;
	textBox2->Text = Convert::ToString(euro);
	textBox3->Text = Convert::ToString(dollar);
	std::string s = "Перевод в доллары: " + std::to_string(dollar) + " \nПеревод в евро: " + std::to_string(euro);
	String^ str2 = gcnew String(s.c_str());
	System::Windows::Forms::MessageBox::Show(str2, "Результат");
}
};
}