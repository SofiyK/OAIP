#pragma once

namespace LR33 {

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1330, 848);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		int W, H, d;
		W = this->ClientSize.Width;
		H = this->ClientSize.Height;
		d = H / 20;

		Pen^ aPen = gcnew Pen(Color::Black, 3);
		Pen^ bPen = gcnew Pen(Color::DarkRed, 2);
		Pen^ cPen = gcnew Pen(Color::Black, 3);
		cPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;


		array<Point>^ p;
		p = gcnew array<Point>(4);
		p[0].X = W / 2 - 3 * d;
		p[0].Y = 9 * d;
		p[1].X = W - 3 * d;
		p[1].Y = 14 * d;
		p[2].X = W / 4 - 3 * d;
		p[2].Y = 18 * d;
		p[3].X = W / 2 - 3 * d;
		p[3].Y = 9 * d;

		e->Graphics->FillPolygon(Brushes::Red, p);
		e->Graphics->DrawPolygon(Pens::Black,p);

		//Граница сечения
		e->Graphics->DrawLine(bPen, p[0], p[1]);
		e->Graphics->DrawLine(bPen, p[1], p[2]);
		e->Graphics->DrawLine(bPen, p[2], p[3]);
		//Боковые ребра
		e->Graphics->DrawLine(cPen, W / 2 - 3*d, 4*d, W / 2 - 3*d, 14*d );
		e->Graphics->DrawLine(aPen, W/4 - 3*d, 8 * d,W/4 - 3*d, 18 * d);
		e->Graphics->DrawLine(aPen, W - 3*d, 4 * d, W - 3*d, 14 * d);
		e->Graphics->DrawLine(aPen, 3*W/4 - 3* d, 8 * d, 3 * W / 4 - 3 * d, 18 * d);
		//Верхняя грань
		e->Graphics->DrawLine(aPen, W / 2 - 3 * d, 4 * d, W / 4 - 3 * d, 8 * d);
		e->Graphics->DrawLine(aPen, W / 4 - 3 * d, 8 * d, 3 * W / 4 - 3 * d, 8 * d);
		e->Graphics->DrawLine(aPen, 3 * W / 4 - 3 * d, 8 * d, W - 3 * d, 4 * d);
		e->Graphics->DrawLine(aPen, W - 3 * d, 4 * d, W / 2 - 3 * d, 4 * d);
		//Нижняя грань
		e->Graphics->DrawLine(cPen, W / 2 - 3 * d, 14 * d, W / 4 - 3 * d, 18 * d);
		e->Graphics->DrawLine(aPen, W / 4 - 3 * d, 18 * d, 3 * W / 4 - 3 * d, 18 * d);
		e->Graphics->DrawLine(aPen, W - 3 * d, 14 * d, 3 * W / 4 - 3 * d, 18 * d);
		e->Graphics->DrawLine(cPen, W - 3 * d, 14 * d, W / 2 - 3 * d, 14 * d);

	}
	private: System::Void MyForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Refresh();
	}
	};
}
