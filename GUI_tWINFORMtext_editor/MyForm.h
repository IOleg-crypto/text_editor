#pragma once

#include "Library.h"

namespace GUItWINFORMtexteditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->AutoSize = true;
			this->richTextBox1->Location = System::Drawing::Point(20, 37);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ShortcutsEnabled = false;
			this->richTextBox1->Size = System::Drawing::Size(1134, 474);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(31, 520);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(225, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Check color of label field to black";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->Location = System::Drawing::Point(453, 516);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 26);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Show info";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(293, 520);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(128, 20);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Enable readonly";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(605, 517);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(160, 29);
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 552);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Notepad";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//changing color field(black/white)
		if (checkBox1->Checked)
		{
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
		}
		else
		{
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->ForeColor = System::Drawing::Color::Black; //#Fixed bug with text;
		}
	}
	//Showing short infomation	  
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Notepad had been made by I#Oleg \n @Copyright 2024" , "\tInformation" , MessageBoxButtons::OK , MessageBoxIcon::Information);
			
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
/* Bullshut
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	bool buttonwasclicked = false;
	if (buttonwasclicked == true) { this->button2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true; }
	else  this->button2->Text = L"Enable readonly";  this->richTextBox1->ReadOnly = false;
}
*/
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
	}
	else { this->checkBox2->Text = L"Enable readonly";  this->richTextBox1->ReadOnly = false; }
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
