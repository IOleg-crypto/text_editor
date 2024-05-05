#pragma once
#include <windows.h>
#include <vcclr.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Text;
using namespace System::IO;

public ref class InheritanceElement : public TabPage
{
public:  
    RichTextBox^ textbox;
    InheritanceElement()
    {
        textbox = gcnew RichTextBox;
        tabControl1->Controls->Add(textbox);
        textbox->Dock = System::Windows::Forms::DockStyle::Fill;
    }
   
};


