#include "MyForm.h"
#include "DatabaseAccess.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Composants::DatabaseAccess^ un = gcnew Composants::DatabaseAccess();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
	
}