#pragma once


#include "Library.h"
#include "CustomRichTextBox.h"
#include "CustomRichTextBox.cpp"
#include "InheritanceElement.h"

namespace GUItWINFORMtexteditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Text;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

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

	private: System::Windows::Forms::CheckBox^ checkBox1;



	private: System::Windows::Forms::CheckBox^ checkBox2;








	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ deleteFieldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newFileToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ complieToolStripMenuItem;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;



	private: System::Windows::Forms::FontDialog^ fontDialog1;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ makeFileToolStripMenuItem;


	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ changeColorToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ changeColorTextToolStripMenuItem;













	private: System::Windows::Forms::ToolStripMenuItem^ addPageToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::ToolStripMenuItem^ clearPageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveFileToolStripMenuItem;


















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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFieldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorTextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->complieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			resources->ApplyResources(this->checkBox1, L"checkBox1");
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			resources->ApplyResources(this->checkBox2, L"checkBox2");
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			this->checkBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::checkBox2_KeyUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->menuToolStripMenuItem,
					this->infoToolStripMenuItem, this->complieToolStripMenuItem, this->changeColorToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::menuStrip1_KeyDown);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->openFileToolStripMenuItem,
					this->saveFileToolStripMenuItem, this->newFileToolStripMenuItem, this->makeFileToolStripMenuItem, this->deleteFieldToolStripMenuItem,
					this->changeColorTextToolStripMenuItem, this->addPageToolStripMenuItem, this->clearPageToolStripMenuItem
			});
			resources->ApplyResources(this->menuToolStripMenuItem, L"menuToolStripMenuItem");
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::menuToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			resources->ApplyResources(this->openFileToolStripMenuItem, L"openFileToolStripMenuItem");
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// saveFileToolStripMenuItem
			// 
			this->saveFileToolStripMenuItem->Name = L"saveFileToolStripMenuItem";
			resources->ApplyResources(this->saveFileToolStripMenuItem, L"saveFileToolStripMenuItem");
			this->saveFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFileToolStripMenuItem_Click);
			// 
			// newFileToolStripMenuItem
			// 
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			resources->ApplyResources(this->newFileToolStripMenuItem, L"newFileToolStripMenuItem");
			this->newFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newFileToolStripMenuItem_Click);
			// 
			// makeFileToolStripMenuItem
			// 
			this->makeFileToolStripMenuItem->Name = L"makeFileToolStripMenuItem";
			resources->ApplyResources(this->makeFileToolStripMenuItem, L"makeFileToolStripMenuItem");
			this->makeFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::makeFileToolStripMenuItem_Click);
			// 
			// deleteFieldToolStripMenuItem
			// 
			this->deleteFieldToolStripMenuItem->Name = L"deleteFieldToolStripMenuItem";
			resources->ApplyResources(this->deleteFieldToolStripMenuItem, L"deleteFieldToolStripMenuItem");
			this->deleteFieldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteFieldToolStripMenuItem_Click);
			// 
			// changeColorTextToolStripMenuItem
			// 
			this->changeColorTextToolStripMenuItem->Name = L"changeColorTextToolStripMenuItem";
			resources->ApplyResources(this->changeColorTextToolStripMenuItem, L"changeColorTextToolStripMenuItem");
			this->changeColorTextToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changeColorTextToolStripMenuItem_Click);
			// 
			// addPageToolStripMenuItem
			// 
			this->addPageToolStripMenuItem->Name = L"addPageToolStripMenuItem";
			resources->ApplyResources(this->addPageToolStripMenuItem, L"addPageToolStripMenuItem");
			this->addPageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addPageToolStripMenuItem_Click);
			// 
			// clearPageToolStripMenuItem
			// 
			this->clearPageToolStripMenuItem->Name = L"clearPageToolStripMenuItem";
			resources->ApplyResources(this->clearPageToolStripMenuItem, L"clearPageToolStripMenuItem");
			this->clearPageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearPageToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			resources->ApplyResources(this->infoToolStripMenuItem, L"infoToolStripMenuItem");
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// complieToolStripMenuItem
			// 
			this->complieToolStripMenuItem->Name = L"complieToolStripMenuItem";
			resources->ApplyResources(this->complieToolStripMenuItem, L"complieToolStripMenuItem");
			this->complieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::complieToolStripMenuItem_Click);
			// 
			// changeColorToolStripMenuItem
			// 
			this->changeColorToolStripMenuItem->Name = L"changeColorToolStripMenuItem";
			resources->ApplyResources(this->changeColorToolStripMenuItem, L"changeColorToolStripMenuItem");
			this->changeColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changeColorToolStripMenuItem_Click);
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &MyForm::fontDialog1_Apply);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"underline.png");
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->richTextBox1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->UseWaitCursor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->UseWaitCursor = true;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox1_KeyDown);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->ControlAdded += gcnew System::Windows::Forms::ControlEventHandler(this, &MyForm::tabControl1_ControlAdded);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			resources->ApplyResources(this, L"$this");
			this->CausesValidation = false;
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeBegin += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
    RichTextBox^ textbox1_rich = gcnew RichTextBox;
    //field test
	InheritanceElement^ m;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
    
	public: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//changing color field(black/white)
		if (checkBox1->Checked)
		{
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->textbox1_rich->BackColor = System::Drawing::Color::Black;
			this->textbox1_rich->ForeColor = System::Drawing::Color::White;

		}
		else
		{
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			this->textbox1_rich->BackColor = System::Drawing::Color::Black;
			this->textbox1_rich->ForeColor = System::Drawing::Color::White;//#Fixed bug with text;
		}
	}
	//Showing short infomation	  }
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	public: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) 
	{
		this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
		this->textbox1_rich->ReadOnly = true;
		
	}
	else { this->checkBox2->Text = L"Enable readonly";  this->richTextBox1->ReadOnly = false;
	this->textbox1_rich->ReadOnly = false;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
/*
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	//System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	//System::Drawing::FontStyle newFontStyle;
	//newFontStyle = FontStyle::Regular;
	//richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 15.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}

private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 22.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
*/ //disable for minimum 
private: System::Void deleteFieldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	this->textbox1_rich->Text = "";
}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Notepad had been made by I#Oleg \n @Copyright 2024", "\tInformation", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	//open file with text
	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		//openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			textbox1_rich->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				myStream->Close();
			}
		}
	}
	//save file with text
private: System::Void newFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//SaveFileDialog^ saveFile1 = gcnew SaveFileDialog;

	// Initialize the SaveFileDialog to specify the RTF extention for the file.
	//saveFile1->DefaultExt = "*.txt";
	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		textbox1_rich->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			// Code to write the stream goes here.
			myStream->Close();
		}
		//richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText); //save text from richtextbox to new file (without encoding)
		//richTextBox1->SaveFile(saveFile1->FileName) = System::Drawing::	
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
/*
private: System::Void toolStripMenuItem8_Click(System::Object^ sender, System::EventArgs^ e) {
	//make to not drop font
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 25.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
}
	private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
		this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 25.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

	}
*/ //disable necessary
	private: System::Void complieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->Font = richTextBox1->Font;
		fontDialog1->Color = richTextBox1->ForeColor;
		fontDialog1->Font = textbox1_rich->Font;
		fontDialog1->Color = textbox1_rich->ForeColor;
		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
			textbox1_rich->Font = fontDialog1->Font;
			textbox1_rich->ForeColor = fontDialog1->Color;
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Bold;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);

}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Regular;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	System::Drawing::FontStyle newFontStyle;
	newFontStyle = FontStyle::Underline;
	richTextBox1->SelectionFont = gcnew System::Drawing::Font(currentFont->FontFamily, currentFont->Size, newFontStyle);
}
private: System::Void sizeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void checkBox2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}
private: System::Void richTextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	}
private: System::Void menuStrip1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		
}
public: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->Font = richTextBox1->Font;
	fontDialog1->Color = richTextBox1->ForeColor;
	if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
	{
		richTextBox1->Font = fontDialog1->Font;
		richTextBox1->ForeColor = fontDialog1->Color;
	}
}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			textbox1_rich->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				myStream->Close();
			}
		}
		
	}
private: System::Void saveFileCTRLFToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Stream^ myStream;
	
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		textbox1_rich->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			// Code to write the stream goes here.
			myStream->Close();
		}
	}

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = 0;
	String^ temp = textBox1->Text;
	//richTextBox1->Text = "";
	//richTextBox1->Text = temp;

	while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))
	{
		//find letter or word
		richTextBox1->Find(textBox1->Text, index, richTextBox1->TextLength, RichTextBoxFinds::None);
		//underline color
		richTextBox1->SelectionBackColor = Color::Red;
		index = richTextBox1->Text->IndexOf(textBox1->Text, index) + 100;
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionColor = Color::Empty;
}
private: System::Void makeFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	textbox1_rich->Clear();
}
private: System::Void changeColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ MyDialog = gcnew ColorDialog;
	// Keeps the user from selecting a custom color.
	MyDialog->AllowFullOpen = false;
	// Allows the user to get help. (The default is false.)
	MyDialog->ShowHelp = true;
	// Sets the initial color select to the current text color.
	MyDialog->Color = richTextBox1->BackColor;
	MyDialog->Color = textbox1_rich->BackColor;

	// Update the text box color if the user clicks OK 
	if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->BackColor = MyDialog->Color;
		textbox1_rich->BackColor = MyDialog->Color;
	}
}
private: System::Void changeColorTextToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ MyDialog = gcnew ColorDialog;
	// Keeps the user from selecting a custom color.
	MyDialog->AllowFullOpen = false;
	// Allows the user to get help. (The default is false.)
	MyDialog->ShowHelp = true;
	// Sets the initial color select to the current text color.
	MyDialog->Color = richTextBox1->ForeColor;
	MyDialog->Color = textbox1_rich->ForeColor;

	// Update the text box color if the user clicks OK 
	if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->ForeColor = MyDialog->Color;
		textbox1_rich->ForeColor = MyDialog->Color;
	}
}

private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void addPageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//added new tabs

	//RichTextBox^ textbox1_rich = gcnew RichTextBox;
	textbox1_rich->Dock = DockStyle::Fill;
	
	String^ title = String::Concat("New file",
		(tabControl1->TabCount + 1).ToString());
	TabPage^ myTabPage = gcnew TabPage(title);
	tabControl1->TabPages->Add(myTabPage);
	if (tabControl1->TabCount > 10)
	{
		MessageBox::Show(L"Warning", "You out of limits", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tabControl1->TabPages->Remove(tabControl1->SelectedTab);
	}
	//tabControl1->Controls->Add(m);
		
}
private: System::Void clearPageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ title = String::Concat("New file",
		(tabControl1->TabCount + 1).ToString());
	TabPage^ myTabPage = gcnew TabPage(title);
	tabControl1->TabPages->Remove(tabControl1->SelectedTab);
}
private: System::Void saveFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tabControl1_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	
}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
