#include "PersonneService.h" 

using namespace Services;

ServiceGestionPersonnes::ServiceGestionPersonnes()
{
    this->databaseAccess = gcnew Composants::DatabaseAccess();
    this->personne = gcnew Composants::MappingTBPERSONNE();
    this->dataSet = gcnew Data::DataSet();
}

DataSet^ ServiceGestionPersonnes::listeClients(String^ dataTableName)
{
    this->dataSet->Clear();
    this->dataSet = this->databaseAccess->getRows(this->personne->SELECT(), dataTableName);
    return this->dataSet;
}

DataSet^ ServiceGestionPersonnes::adressesClient(int iPersonne, String^ dataTableName)
{
    this->dataSet->Clear();
    return this->dataSet;
}

int ServiceGestionPersonnes::ajouter(String^ nom, String^ prenom, array<String^>^ adresses)
{
    int id_personne;
    int i;

    // On ajoute la personne à la bdd
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    id_personne = this->databaseAccess->actionRowsID(this->personne->INSERT());

    return id_personne;
}

void ServiceGestionPersonnes::modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses)
{
    int i;

    // On met à jour la bdd
    this->personne->setID(idPersonne);
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    this->databaseAccess->actionRows(this->personne->UPDATE());
}
