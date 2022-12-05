#include "PersonneService.h"


NS_Comp_Svc::PersonneService::PersonneService(void)
{
    this->Conn = gcnew BDD::Connection();
    this->PersDAO = gcnew BDD::PersonneDAO();
    //throw gcnew System::NotImplementedException();
}

void NS_Comp_Svc::PersonneService::CreatePersonne(String^ Nom, String^ Prenom)// , DateTime DateNaissance)
{
    String^ sql;
    //sql = this->PersDAO->Create();
    this->PersDAO->setNom_Ps(Nom);
    this->PersDAO->setPrenom_Ps(Prenom);
    //this->PersDAO->setDateNaissance_Ps(/*DateNaissance*/);
    sql = this->PersDAO->Create();
    this->Conn->actionRows(sql);
}

DataSet^ NS_Comp_Svc::PersonneService::SelectPersonne(System::String^)
{
    String^ sql;
    sql = this->PersDAO->Select();
    return this->Conn->getRows(sql,L"Personne");//this->Conn->getRows(sql,dataTableName);
    // TODO: insérer une instruction return ici
};