#pragma once


#include "Library.h"
//#include "Extension.h"

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
			//
		
			
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




	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
	private: System::Windows::Forms::ToolStripMenuItem^ complieToolStripMenuItem;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;



	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ changeFieldToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ installToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveFileCTRLFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ makeFileToolStripMenuItem;


	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;




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
			this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteFieldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeFieldToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->installToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileCTRLFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->complieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->Location = System::Drawing::Point(32, 67);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1226, 495);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			this->richTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::richTextBox1_KeyDown);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(20, 572);
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
			this->checkBox2->Location = System::Drawing::Point(295, 572);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(128, 20);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Enable readonly";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			this->checkBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::checkBox2_KeyUp);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->infoToolStripMenuItem, this->complieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1258, 28);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::menuStrip1_KeyDown);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->sizeToolStripMenuItem,
					this->deleteFieldToolStripMenuItem, this->openFileToolStripMenuItem, this->newFileToolStripMenuItem, this->changeFieldToolStripMenuItem,
					this->saveFileCTRLFToolStripMenuItem, this->makeFileToolStripMenuItem
			});
			this->menuToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// sizeToolStripMenuItem
			// 
			this->sizeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem7, this->toolStripMenuItem8
			});
			this->sizeToolStripMenuItem->Name = L"sizeToolStripMenuItem";
			this->sizeToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->sizeToolStripMenuItem->Text = L"Size";
			this->sizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sizeToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Checked = true;
			this->toolStripMenuItem2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem2->Text = L"10.0";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Checked = true;
			this->toolStripMenuItem3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem3->Text = L"15.0";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Checked = true;
			this->toolStripMenuItem4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem4->Text = L"20.0";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Checked = true;
			this->toolStripMenuItem5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem5->Text = L"22.0";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem7
			// 
			this->toolStripMenuItem7->Checked = true;
			this->toolStripMenuItem7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			this->toolStripMenuItem7->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem7->Text = L"25.0";
			this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem7_Click);
			// 
			// toolStripMenuItem8
			// 
			this->toolStripMenuItem8->Checked = true;
			this->toolStripMenuItem8->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			this->toolStripMenuItem8->Size = System::Drawing::Size(119, 26);
			this->toolStripMenuItem8->Text = L"30.0";
			this->toolStripMenuItem8->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem8_Click);
			// 
			// deleteFieldToolStripMenuItem
			// 
			this->deleteFieldToolStripMenuItem->Name = L"deleteFieldToolStripMenuItem";
			this->deleteFieldToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->deleteFieldToolStripMenuItem->Text = L"Delete field";
			this->deleteFieldToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteFieldToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->openFileToolStripMenuItem->Text = L"Open file(CTRL + K)";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// newFileToolStripMenuItem
			// 
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			this->newFileToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->newFileToolStripMenuItem->Text = L"Save file as  (CTRL + S)";
			this->newFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newFileToolStripMenuItem_Click);
			// 
			// changeFieldToolStripMenuItem
			// 
			this->changeFieldToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->installToolStripMenuItem });
			this->changeFieldToolStripMenuItem->Name = L"changeFieldToolStripMenuItem";
			this->changeFieldToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->changeFieldToolStripMenuItem->Text = L"Change field";
			// 
			// installToolStripMenuItem
			// 
			this->installToolStripMenuItem->Name = L"installToolStripMenuItem";
			this->installToolStripMenuItem->Size = System::Drawing::Size(131, 26);
			this->installToolStripMenuItem->Text = L"Install";
			// 
			// saveFileCTRLFToolStripMenuItem
			// 
			this->saveFileCTRLFToolStripMenuItem->Name = L"saveFileCTRLFToolStripMenuItem";
			this->saveFileCTRLFToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->saveFileCTRLFToolStripMenuItem->Text = L"Save file(CTRL + F)";
			this->saveFileCTRLFToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveFileCTRLFToolStripMenuItem_Click);
			// 
			// makeFileToolStripMenuItem
			// 
			this->makeFileToolStripMenuItem->Name = L"makeFileToolStripMenuItem";
			this->makeFileToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->makeFileToolStripMenuItem->Text = L"Make file(Alt + L)";
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::infoToolStripMenuItem_Click);
			// 
			// complieToolStripMenuItem
			// 
			this->complieToolStripMenuItem->Name = L"complieToolStripMenuItem";
			this->complieToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->complieToolStripMenuItem->Text = L"Change font";
			this->complieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::complieToolStripMenuItem_Click);
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
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 31);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Bold";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(118, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 31);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Regular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->Location = System::Drawing::Point(226, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 30);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Underline";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(219, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 37);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(778, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 22);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(697, 7);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(927, 7);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 22);
			this->button5->TabIndex = 14;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1258, 604);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Notepad";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeBegin += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

    //field test
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
	//Showing short infomation	  }
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
	}
	else { this->checkBox2->Text = L"Enable readonly";  this->richTextBox1->ReadOnly = false; }
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

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
private: System::Void deleteFieldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
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
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			// Code to write the stream goes here.
			myStream->Close();
		}
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText); //save text from richtextbox to new file (without encoding)
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
	private: System::Void complieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->Font = richTextBox1->Font;
		fontDialog1->Color = richTextBox1->ForeColor;
		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
		}

	}
private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox1->SelectionFont;
	this->richTextBox1->Font = (gcnew System::Drawing::Font(currentFont->FontFamily, 25.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
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

	if (e->KeyValue == (int)Keys::Control || e->KeyValue == (int)Keys::S )
	{
		Stream^ myStream;
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
                // Code to write the stream goes here.
				myStream->Close();
			}
		}

	}
	if (e->KeyValue == (int)Keys::Control || e->KeyValue == (int)Keys::K)
	{
		//OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		//openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				myStream->Close();
			}
		}
			
	}
	if (e->KeyValue == (int)Keys::Control || e->KeyValue == (int)Keys::M)
	{
		//checkBox2->Checked = 1;
			checkBox2->Checked = 1;
			this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
			Sleep(200);
			
	}
	if (e->KeyValue == (int)Keys::Control || e->KeyValue == (int)Keys::X)
	{
		checkBox2->Checked = 0;
		this->checkBox2->Text = L"Enable readonly";
		this->richTextBox1->ReadOnly = false;
	}
	if (e->KeyValue == (int)Keys::Alt || e->KeyValue == (int)Keys::K)
	{
		fontDialog1->Font = richTextBox1->Font;
		fontDialog1->Color = richTextBox1->ForeColor;
		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
		}
	}
		
}
private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
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
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				myStream->Close();
			}
		}
		
	}
private: System::Void saveFileCTRLFToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

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
		index = richTextBox1->Text->LastIndexOf(textBox1->Text, index) + 100;;
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionBackColor = Color::White;
	this->textBox1->Text = "";
}
};
}
