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
	private: System::Windows::Forms::ToolStripMenuItem^ textStyleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ boldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ regularToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;


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
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textStyleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->regularToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->Location = System::Drawing::Point(20, 37);
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
			this->menuStrip1->Size = System::Drawing::Size(1166, 30);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->sizeToolStripMenuItem,
					this->deleteFieldToolStripMenuItem, this->openFileToolStripMenuItem, this->newFileToolStripMenuItem, this->textStyleToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 26);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// sizeToolStripMenuItem
			// 
			this->sizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			this->sizeToolStripMenuItem->Size = System::Drawing::Size(170, 26);
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
			this->deleteFieldToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->deleteFieldToolStripMenuItem->Text = L"Delete field";
			this->deleteFieldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteFieldToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->openFileToolStripMenuItem->Text = L"Open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// newFileToolStripMenuItem
			// 
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			this->newFileToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->newFileToolStripMenuItem->Text = L"Save file";
			this->newFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newFileToolStripMenuItem_Click);
			// 
			// textStyleToolStripMenuItem
			// 
			this->textStyleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->boldToolStripMenuItem,
					this->regularToolStripMenuItem, this->toolStripMenuItem1
			});
			this->textStyleToolStripMenuItem->Name = L"textStyleToolStripMenuItem";
			this->textStyleToolStripMenuItem->Size = System::Drawing::Size(170, 26);
			this->textStyleToolStripMenuItem->Text = L"Text style";
			// 
			// boldToolStripMenuItem
			// 
			this->boldToolStripMenuItem->Name = L"boldToolStripMenuItem";
			this->boldToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->boldToolStripMenuItem->Text = L"Bold";
			this->boldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::boldToolStripMenuItem_Click);
			// 
			// regularToolStripMenuItem
			// 
			this->regularToolStripMenuItem->Name = L"regularToolStripMenuItem";
			this->regularToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->regularToolStripMenuItem->Text = L"Regular";
			this->regularToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::regularToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(156, 26);
			this->toolStripMenuItem1->Text = L"Underline";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 26);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1166, 552);
			this->Controls->Add(this->checkBox2);
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
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Regular;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
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
	//open file with text
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->ShowDialog();
		richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
	}
    //save file with text
private: System::Void newFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFile1 = gcnew SaveFileDialog;

	// Initialize the SaveFileDialog to specify the RTF extention for the file.
	//saveFile1->DefaultExt = "*.txt";
	saveFile1->Filter = "Text files|*.txt";
	saveFile1->Title = "Save file";
	saveFile1->RestoreDirectory = true;
	// Determine whether the user selected a file name from the saveFileDialog. 
	if (saveFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		// Save the contents of the RichTextBox into the file.
		//System::IO::File::WriteAllText(saveFile1->FileName, richTextBox1->Text, System::Text::Encoding::Default);
		richTextBox1->SaveFile(saveFile1->FileName , RichTextBoxStreamType::PlainText); //save text from richtextbox to new file (without encoding)
		//richTextBox1->SaveFile(saveFile1->FileName) = System::Drawing::	
	}
	else
	{
		return;
	}
}

private: System::Void boldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Bold;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
}
private: System::Void regularToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Regular;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
}
};
}
