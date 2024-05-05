#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Configuration::Install;


namespace GUItWINFORMtexteditor {

	[RunInstaller(true)]

	/// <summary>
	/// Summary for InstallerRichTextBox
	/// </summary>
	public ref class InstallerRichTextBox : public System::Configuration::Install::Installer
	{
	public:
		InstallerRichTextBox(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InstallerRichTextBox()
		{
			if (components)
			{
				delete components;
			}
		}

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
		}
#pragma endregion
	};
}
