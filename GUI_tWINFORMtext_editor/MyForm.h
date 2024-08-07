#pragma once


#include "Library.h"


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






	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newFileToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ complieToolStripMenuItem;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;



	private: System::Windows::Forms::FontDialog^ fontDialog1;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ makeFileToolStripMenuItem;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ToolStripMenuItem^ changeColorToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ changeColorTextToolStripMenuItem;






















	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;
private: System::Windows::Forms::RichTextBox^ richTextBox1;






















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorTextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->complieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
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
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->menuToolStripMenuItem,
					this->infoToolStripMenuItem, this->complieToolStripMenuItem, this->changeColorToolStripMenuItem, this->editToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::menuStrip1_KeyDown);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openFileToolStripMenuItem,
					this->newFileToolStripMenuItem, this->makeFileToolStripMenuItem, this->changeColorTextToolStripMenuItem
			});
			resources->ApplyResources(this->menuToolStripMenuItem, L"menuToolStripMenuItem");
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			resources->ApplyResources(this->openFileToolStripMenuItem, L"openFileToolStripMenuItem");
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
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
			// changeColorTextToolStripMenuItem
			// 
			this->changeColorTextToolStripMenuItem->Name = L"changeColorTextToolStripMenuItem";
			resources->ApplyResources(this->changeColorTextToolStripMenuItem, L"changeColorTextToolStripMenuItem");
			this->changeColorTextToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::changeColorTextToolStripMenuItem_Click);
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
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->dateToolStripMenuItem,
					this->undoToolStripMenuItem, this->redoToolStripMenuItem, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem,
					this->selectAllToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			resources->ApplyResources(this->editToolStripMenuItem, L"editToolStripMenuItem");
			// 
			// dateToolStripMenuItem
			// 
			this->dateToolStripMenuItem->Name = L"dateToolStripMenuItem";
			resources->ApplyResources(this->dateToolStripMenuItem, L"dateToolStripMenuItem");
			this->dateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dateToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			resources->ApplyResources(this->undoToolStripMenuItem, L"undoToolStripMenuItem");
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			resources->ApplyResources(this->redoToolStripMenuItem, L"redoToolStripMenuItem");
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem_Click);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			resources->ApplyResources(this->cutToolStripMenuItem, L"cutToolStripMenuItem");
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			resources->ApplyResources(this->copyToolStripMenuItem, L"copyToolStripMenuItem");
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			resources->ApplyResources(this->pasteToolStripMenuItem, L"pasteToolStripMenuItem");
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripMenuItem_Click);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			resources->ApplyResources(this->selectAllToolStripMenuItem, L"selectAllToolStripMenuItem");
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectAllToolStripMenuItem_Click);
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
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			resources->ApplyResources(this, L"$this");
			this->CausesValidation = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->HelpButton = true;
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
    
    //field test
	//InheritanceElement^ m;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
    
	public: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		//changing color field(black/white)
		if (checkBox1->Checked)
		{
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			

		}
		else
		{
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			//#Fixed bug with text;
		}
	}
	//Showing short infomation	  }
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
	public: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) 
	{
		this->checkBox2->Text = L"Disable readonly"; this->richTextBox1->ReadOnly = true;
		//this->textbox1_rich->ReadOnly = true;
		
	}
	else { this->checkBox2->Text = L"Enable readonly"; this->richTextBox1->ReadOnly = false;
	//this->textbox1_rich->ReadOnly = false;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void deleteFieldToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->richTextBox1->Text = "";
	//this->textbox1_rich->Text = "";
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
			
			//textbox1_rich->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				myStream->Close();
			}
		}
	}
	//save file with text
private: System::Void newFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
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

	private: System::Void complieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        fontDialog1->Font = richTextBox1->Font;
		fontDialog1->Color = richTextBox1->ForeColor;
		////fontDialog1->Font = textbox1_rich->Font;
		//fontDialog1->Color = textbox1_rich->ForeColor;
		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			richTextBox1->Font = fontDialog1->Font;
			richTextBox1->ForeColor = fontDialog1->Color;
			//textbox1_rich->Font = fontDialog1->Font;
			//textbox1_rich->ForeColor = fontDialog1->Color;
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
	//fontDialog1->Font = richTextBox1->Font;
	//fontDialog1->Color = richTextBox1->ForeColor;
	if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
	{
		//richTextBox1->Font = fontDialog1->Font;
		//richTextBox1->ForeColor = fontDialog1->Color;
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
			//textbox1_rich->Text = System::IO::File::ReadAllText(openFileDialog1->FileName);
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
		//textbox1_rich->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			// Code to write the stream goes here.
			myStream->Close();
		}
		
	}
	//richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = 0;
	//TODO : Fix replacing text
	String^ temp = textBox1->Text;
	String^ searchtext = richTextBox1->Text;
	richTextBox1->Text = "";
	richTextBox1->Text = temp;

	while (index < richTextBox1->Text->LastIndexOf(textBox1->Text))
	{
		//find letter or word
		richTextBox1->Find(textBox1->Text, index, richTextBox1->TextLength, RichTextBoxFinds::None);
		//underline color
		richTextBox1->SelectionBackColor = Color::Red;
		index = richTextBox1->Text->IndexOf(textBox1->Text, index);
	}
	

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionColor = Color::Empty;
}
private: System::Void makeFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    richTextBox1->Clear();
	
}
private: System::Void changeColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ MyDialog = gcnew ColorDialog;
	// Keeps the user from selecting a custom color.
	MyDialog->AllowFullOpen = false;
	// Allows the user to get help. (The default is false.)
	MyDialog->ShowHelp = true;
	// Sets the initial color select to the current text color.
	////MyDialog->Color = richTextBox1->BackColor;
	MyDialog->Color = richTextBox1->BackColor;

	// Update the text box color if the user clicks OK 
	if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->BackColor = MyDialog->Color;
		//textbox1_rich->BackColor = MyDialog->Color;
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
	

	// Update the text box color if the user clicks OK 
	if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->ForeColor = MyDialog->Color;
	}
}

private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text = System::DateTime::Now.ToString();
}
private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Undo();
}
private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Redo();
}
private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Cut();
}
private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Copy();
}
private: System::Void pasteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
}
private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectAll();
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
