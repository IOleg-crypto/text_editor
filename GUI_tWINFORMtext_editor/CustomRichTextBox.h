#include "MyForm.h"
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

namespace CustomRichTextBox {
    public ref class MyForm : public TabPage  {
    public:

        // Добавьте ваш пользовательский код здесь
        RichTextBox ^textbox_rich = gcnew RichTextBox();
        void CustomTab()
        {
            textbox_rich->Dock = DockStyle::Fill;
            this->Controls->Add(textbox_rich);
        }
    protected:
       // ~CustomRichTextBox() = default; // Деструктор
    };
}

