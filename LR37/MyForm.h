#pragma once
int count = 0;
namespace LR37 {

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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::NavajoWhite;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 42;
			this->listBox1->Location = System::Drawing::Point(13, 97);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(631, 886);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(717, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(426, 103);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Показать список";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Khaki;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(717, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(426, 103);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Загрузить в файл";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Khaki;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(717, 358);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(426, 103);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Удалить запись";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(717, 536);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(426, 103);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Добавить запись";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Khaki;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(717, 715);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(426, 103);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Считать из файла";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Khaki;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(717, 889);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(426, 103);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Сумма очков";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1206, 536);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 67);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1197, 818);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 51);
			this->label2->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1183, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(413, 398);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(643, 74);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Фамилия, приседания со штангой на плечах,\r\nжим штанги лёжа, становая тяга";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(1631, 1007);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"LR37";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void LoadFromFile(String^ File, ListBox^ listBox1) {
			String^ d, ^ b;
			listBox1->Items->Clear();
			try {
				b = System::IO::File::ReadAllText(File);
			}
			catch (...) {
				System::IO::File::WriteAllText("LR37.txt", "");
				return;
			}
			while (b->Length > 0) {
				int i = b->IndexOf("\n");
				if (i < 0) continue;
				d = b->Substring(0, i);
				listBox1->Items->Add(d);
				b = b->Substring(i + 1, b->Length - d->Length - 1);
			}
			this->listBox1->SelectedIndex = -1;
		}

		private: void SaveToFile(String^ File, ListBox^ listBox1) {
			String^ a, ^ b;
			int n = listBox1->Items->Count;
			System::IO::File::Delete(File);
			for (int i = 0;i < n;i++) {
				a = listBox1->Items[i]->ToString();
				b += a->Concat(a, "\n");
			}
			System::IO::File::AppendAllText(File, b);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (count == 0) {
			count++;
			listBox1->Items->Add("Иванов, 5, 10, 3");
			listBox1->Items->Add("Прохоров, 4, 3, 7");
			listBox1->Items->Add("Семенов, 2, 10, 10");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveToFile("LR37.txt", this->listBox1);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox1->SelectedIndex != -1) {
		this->listBox1->Items->Remove(this->listBox1->SelectedItem);
		if (this->listBox1->Items->Count == 0) {
			this->listBox1->SelectedIndex = -1;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ x1 = textBox1->Text;
	if (x1 != "") {
		listBox1->Items->Add(x1);
		this->textBox1->Clear();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->LoadFromFile("LR37.txt", this->listBox1);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == -1) {
		MessageBox::Show("Выберите спортсмена для подсчета очков",
			"Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	String^ line = listBox1->SelectedItem->ToString();
	array<String^>^ parts = line->Split(',');

	if (parts->Length < 4) {
		MessageBox::Show("Неверный формат строки",
			"Ошибка",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	int s = 0;

	for (int i = 1; i <= 3; i++) {
		String^ str = parts[i]->Trim();
		s += Int32::Parse(str);
	}

	label2->Text = "Сумма очков: " + s.ToString();
}
};
}
