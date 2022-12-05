#include "MyForm.h"
#include "DatabaseAccess.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Configuration;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	String^ abc = System::Configuration::ConfigurationManager::AppSettings["Data Source"];
	Composants::DatabaseAccess^ db = gcnew Composants::DatabaseAccess(System::Configuration::ConfigurationManager::AppSettings["Data Source"], System::Configuration::ConfigurationManager::AppSettings["Initial Catalog"], System::Configuration::ConfigurationManager::AppSettings["User ID"], System::Configuration::ConfigurationManager::AppSettings["Password"]);
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}