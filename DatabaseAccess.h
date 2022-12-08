#pragma once

#include <string>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

// On crée un namespace specifique pour les composants, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace Composants
{
    // Classe de Composant Acces à la Donnees
    ref class DatabaseAccess
    {
    public:
        // Constructeur par defaut
        DatabaseAccess(String^ Data_Source, String^ Initial_Catalog, String^ User_ID, String^ Password);

        // Utiliser pour ajouter un element à la base en retournant l'id de l'element
        int actionRowsID(String^ request);

        // Utiliser pour modifier ou supprimer une element de la base
        void actionRows(String^ request);

        // Utiliser pour recuperer de la donnees de la base
        DataSet^ getRows(String^ request, String^ dataTableName);

    private:
        // Contient les informations de connexion
        String^ connectionInformation;

        // Le nom de la requete SQL en cours
        String^ sqlRequest;

        // La connexion SQL
        SqlConnection^ sqlConnection;

        // La commande SQL
        SqlCommand^ sqlCommand;
        SqlDataAdapter^ sqlAdapter;

        // Les donnees renvoyees par les requetes
        DataSet^ dataSet;

        // Affecte la requete SQL
        void setSQL(String^ request);
        
       char DatabaseAccessi(String^ Data_Source, String^ Initial_Catalog, String^ User_ID, String^ Password);
    };
}
