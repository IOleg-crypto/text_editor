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








	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteFieldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newFileToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFieldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(20, 37);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
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
			this->checkBox1->Size = System::Drawing::Size(201, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Change color of field to black";
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
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1166, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sizeToolStripMenuItem,
					this->deleteFieldToolStripMenuItem, this->openFileToolStripMenuItem, this->newFileToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// sizeToolStripMenuItem
			// 
			this->sizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			this->sizeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->sizeToolStripMenuItem->Text = L"Size";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem2->Text = L"10.0";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem3->Text = L"15.0";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem4->Text = L"20.0";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem5->Text = L"22.0";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// deleteFieldToolStripMenuItem
			// 
			this->deleteFieldToolStripMenuItem->Name = L"deleteFieldToolStripMenuItem";
			this->deleteFieldToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->deleteFieldToolStripMenuItem->Text = L"Delete field";
			this->deleteFieldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteFieldToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->openFileToolStripMenuItem->Text = L"Open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// newFileToolStripMenuItem
			// 
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			this->newFileToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->newFileToolStripMenuItem->Text = L"New file";
			this->newFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newFileToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 552);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Notepad";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
		
			
	}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		//static_cast<System::Byte>(0)));
}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
	}
	else { this->checkBox2->Text = L"Enable readonly";  this->richTextBox1->ReadOnly = false; }
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}

private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 22.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void deleteFieldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Notepad had been made by I#Oleg \n @Copyright 2024", "\tInformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->ShowDialog();
		richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::Default);
		/*
		Stream^ mystream;
		//read file and copy to richtextbox
		if ()
		{
			if(openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK)
			String^ text = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			String^ readtext = File::ReadAllText;
			this->richTextBox1->Text = text;
		}
		*/

	}
		
private: System::Void newFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFile1 = gcnew SaveFileDialog;

	// Initialize the SaveFileDialog to specify the RTF extention for the file.
	saveFile1->DefaultExt = "*.txt";
	saveFile1->Filter = "RTF Files|*.txt";

	// Determine whether the user selected a file name from the saveFileDialog. 
	if (saveFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
		saveFile1->FileName->Length > 0)
	{
		// Save the contents of the RichTextBox into the file.
		richTextBox1->SaveFile(saveFile1->FileName); //save text from richtextbox to new file
	}
}
};
}
