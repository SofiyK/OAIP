#pragma once
#include<ctime>
#include<cmath>

int i, n;
int a[15];

namespace LR35 {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Linen;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(77, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1262, 432);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод элементов массива";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(46, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(362, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"*Количество элементов <= 15";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(236, 336);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(783, 49);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(475, 238);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(331, 42);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Исходный массив";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(888, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(331, 127);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать массив";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(581, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 49);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(46, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(497, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите число элементов массива:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Linen;
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(77, 490);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1262, 334);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Найти";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Bisque;
			this->button3->Location = System::Drawing::Point(873, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(318, 79);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SandyBrown;
			this->button2->Location = System::Drawing::Point(70, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(424, 79);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Location = System::Drawing::Point(888, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(303, 49);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(888, 80);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(303, 49);
			this->textBox3->TabIndex = 2;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(19, 131);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(780, 78);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"сумму элементов массива, расположенных между \r\nпервым и вторым положительными эле"
				L"ментами";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(19, 71);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(672, 41);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"максимальный по модулю элемент массива";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(1428, 855);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = "";
		textBox4->Text = "";
		if (textBox1->Text != "") {
			n = Convert::ToInt32(textBox1->Text);
			if (n > 15) {
				MessageBox::Show("Количество элементов массива должно быть меньше 15", 
					"Ошибка ввода данных",
					MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			} else{
				srand(time(0));
				textBox2->Text = "";
				for (i = 0;i < n;i++) {
					a[i] = rand() % 21 - 10;
					this->textBox2->AppendText(a[i] + " ");
				}
			}
		} else {
			MessageBox::Show("Введите данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int count = 0, max = a[0], sum = 0, first = 16, second = 17, num;
	for (i = 0; i <= n - 1; i++)
	{
		if (max < abs(a[i]))
			max = abs(a[i]);

		if (a[i] > 0)
		{
			if (count == 0)
			{
				first = i;
				count++;
			}
			else if (count == 1)
			{
				second = i;
				count++;
			}
		}
	}

	if (checkBox1->Checked == true) {
		this->textBox3->Text = Convert::ToString(max);
	}
	else {
		textBox3->Text = "";
	}
	if(checkBox2->Checked == true) {
		if (first != 16 && second != 17) { 
			for (i = first + 1; i <= second - 1; i++) {
				sum += a[i];
			}
			this->textBox4->Text = Convert::ToString(sum);
		}
		else {
			this->textBox4->Text = "Ошибка";
			MessageBox::Show("Положительных элементов в массиве либо нет, либо он только один.", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
	}
	else {
		textBox4->Text = "";
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		   Close();
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}

};
}
