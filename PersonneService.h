#pragma once

#include "DatabaseAccess.h" 
#include "Personne.h" 

// On cr�e un namespace specifique pour la gestion de service, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace Services
{
    ref class ServiceGestionPersonnes
    {
    public:
        // constructeur par defaut
        ServiceGestionPersonnes();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        DataSet^ listeClients(String^ dataTableName);

        // Permet de recuperer la liste des adresses en fonction de la personne (identifiant de la liste)
        DataSet^ adressesClient(int idPersonne, String^ dataTableName);

        // Permet d'ajouter une personne (nom, prenom, adresses)
        int ajouter(String^ nom, String^ prenom, array<String^>^ adresses);

        // Permet de modifier une personne (indentifiant de la personne � modifier, nouveau nom, nouveau prenom, nouvelles adresses)
        void modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses);

        // Permet de supprimer une personne (identifiant de la personne � supprimer)
        void supprimer(int idPersonne);

    private:
        // Permet d'acceder � la donnee
        Composants::DatabaseAccess^ databaseAccess;

        // Permet de mapper une donnee personne vers/depuis la bdd
        Composants::MappingTBPERSONNE^ personne;

        // Cache de donn�e en memoire de la bdd
        DataSet^ dataSet;
    };
}