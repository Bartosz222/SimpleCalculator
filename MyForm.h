#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelForTextbox;
	private: System::Windows::Forms::Label^ labelForLabel1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelForTextbox = (gcnew System::Windows::Forms::Label());
			this->labelForLabel1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->textBox1->Location = System::Drawing::Point(41, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 35);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->button1->Location = System::Drawing::Point(247, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 72);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Oblicz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label1->Location = System::Drawing::Point(619, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"0";
			// 
			// labelForTextbox
			// 
			this->labelForTextbox->AutoSize = true;
			this->labelForTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->labelForTextbox->Location = System::Drawing::Point(36, 39);
			this->labelForTextbox->Name = L"labelForTextbox";
			this->labelForTextbox->Size = System::Drawing::Size(206, 29);
			this->labelForTextbox->TabIndex = 3;
			this->labelForTextbox->Text = L"Cena przedmiotu";
			// 
			// labelForLabel1
			// 
			this->labelForLabel1->AutoSize = true;
			this->labelForLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->labelForLabel1->Location = System::Drawing::Point(508, 121);
			this->labelForLabel1->Name = L"labelForLabel1";
			this->labelForLabel1->Size = System::Drawing::Size(90, 29);
			this->labelForLabel1->TabIndex = 4;
			this->labelForLabel1->Text = L"Wynik:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->checkBox1->Location = System::Drawing::Point(314, 83);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 33);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Vat";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->checkBox2->Location = System::Drawing::Point(314, 136);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 33);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Podatek";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 435);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->labelForLabel1);
			this->Controls->Add(this->labelForTextbox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		const double vat = 23;
		int liczba = System::Convert::ToInt16(textBox1->Text);
		int wynik;
		if (checkBox1->Checked) {
			wynik = vat / 100 * liczba;
			wynik += liczba;
			label1->Text = System::Convert::ToString(wynik);
		}
		else label1->Text = System::Convert::ToString(liczba);
	}
	};
}
