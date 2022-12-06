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

	//Composants::DatabaseAccess^ un = gcnew Composants::DatabaseAccess(System::Configuration::ConfigurationManager::AppSettings["Data Source"], System::Configuration::ConfigurationManager::AppSettings["Initial Catalog"], System::Configuration::ConfigurationManager::AppSettings["User ID"], System::Configuration::ConfigurationManager::AppSettings["Password"]);
	//Composants::MappingPERSONNE^ deux = gcnew Composants::MappingPERSONNE();
	//deux->setPrenom("Test");
	//deux->setNom("Bonjour");

	//String^ test = deux->INSERT("Test","Bonjour");
	//un->actionRowsID(test);
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}