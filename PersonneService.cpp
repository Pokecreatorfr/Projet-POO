#include "PersonneService.h" 

using namespace Services;

ServiceGestionPersonnes::ServiceGestionPersonnes()
{
    this->databaseAccess = gcnew Composants::DatabaseAccess();
    this->personne = gcnew Composants::MappingPERSONNE();
    this->dataSet = gcnew Data::DataSet();
}

DataSet^ ServiceGestionPersonnes::listeClients(String^ dataTableName)
{
    this->dataSet->Clear();
    this->dataSet = this->databaseAccess->getRows(this->personne->SELECT(), dataTableName);
    return this->dataSet;
}

int ServiceGestionPersonnes::ajouter(String^ nom, String^ prenom)
{

    int i;

    // On ajoute la personne à la bdd
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    return 0;
}

    void ServiceGestionPersonnes::modifier(int idPersonne, String ^ nom, String ^ prenom)
    {
        int i;

        // On met à jour la bdd
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->databaseAccess->actionRows(this->personne->UPDATE());

    }
void ServiceGestionPersonnes::supprimer(int idPersonne)
{

    // suppression des adresses liées au client
    // 
    // suppression de la personne de la BDD
    this->databaseAccess->actionRows(this->personne->DELETE());
}
