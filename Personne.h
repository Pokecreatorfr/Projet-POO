#pragma once

using namespace System;

// On crée un namespace specifique pour les composants, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace Composants
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donnée
    ref class MappingTBPERSONNE
    {
    public:
        // Constructeur par defaut
        MappingTBPERSONNE();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setID(int id);
        void setPrenom(String^ prenom);
        void setNom(String^ nom);
        int getId();
        String^ getNom();
        String^ getPrenom();

    private:
        int idPersonne;
        String^ nom;
        String^ prenom;
    };
}

};

