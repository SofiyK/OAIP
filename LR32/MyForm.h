#pragma once
#include<ctime>
#include <cstdlib>

namespace LR32 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1514, 1008);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		srand(time(0));
		this->timer1->Enabled = true;
		this->timer1->Interval = 50;

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ gr = this->CreateGraphics();

		int x1, y1, x2, y2, w, h, r;

		w = ClientSize.Width;
		h = ClientSize.Height;
		x1 = rand() % w;
		y1 = rand() % h;
		r = rand() % 100 + 40;
		x2 = r;
		y2 = r;

		Brush^ br1 = gcnew SolidBrush(Color::Blue);
		Brush^ br2 = gcnew SolidBrush(Color::Red);
		Brush^ br3 = gcnew SolidBrush(Color::Green);
		Brush^ br4 = gcnew SolidBrush(Color::Yellow);
		Brush^ br5 = gcnew SolidBrush(Color::Orange);

		int i = rand() % 5;

		switch (i) {
		case 0: gr->FillEllipse(br1, x1, y1, x2, y2); break;
		case 1: gr->FillEllipse(br2, x1, y1, x2, y2); break;
		case 2: gr->FillEllipse(br3, x1, y1, x2, y2); break;
		case 3: gr->FillEllipse(br4, x1, y1, x2, y2); break;
		default: gr->FillEllipse(br5, x1, y1, x2, y2); break;
		}

	}
	};
}
