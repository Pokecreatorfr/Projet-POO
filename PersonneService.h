#include "PersonneDAO.h"
#include "Connection.h"




// On crée un namespace specifique pour la gestion de service, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant

namespace ServicesPersonnes
{
    ref class ServiceGestionPersonnes
    {
    public:
        // constructeur par defaut
        //ServiceGestionPersonnes();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        // DataSet^ listeClients(String^ dataTableName);

        // Permet d'ajouter une personne (nom, prenom, adresses)
        //int ajouter(String^ nom, String^ prenom);

        // Permet de modifier une personne (indentifiant de la personne à modifier, nouveau nom, nouveau prenom, nouvelles adresses)
         //void modifier(int idPersonne, String^ nom, String^ prenom);

    private:
        // Permet d'acceder à la donnee
         //BDD::Connection^ databaseAccess;

        // Permet de mapper une donnee personne vers/depuis la bdd
         //BDD::PersonneDAO^ personne;

        // Cache de donnée en memoire de la bdd
        DataSet^ dataSet;
    };
}
