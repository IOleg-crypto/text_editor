﻿#include "MyForm.h"
#include "Library.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args) 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	GUItWINFORMtexteditor::MyForm form;
	Application::Run(% form);

}


