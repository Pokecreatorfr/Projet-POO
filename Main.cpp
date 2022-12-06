#include "MyForm.h"
#include "DatabaseAccess.h"
#include "Personne.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Configuration;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}