#include "Personne.h"

Personne::Personne()
{
    throw gcnew System::NotImplementedException();
}

Personne::Personne(String^ Nom, String^ Prenom, DateTime DateNaissance, int ID_pl, String poste, DateTime Date_Embauche, int ID_supp)
{
    throw gcnew System::NotImplementedException();
    Nom = Nom;
    Prenom = Prenom;
    DateNaissance = DateNaissance;
    ID_pl = ID_pl;
    Date_Embauche = Date_Embauche;
    ID_supp = ID_supp;
}

int Personne::get_ID_supp()
{
    return ID_supp;
}

DateTime Personne::get_Date_Embauche()
{
    return DateTime(Date_Embauche);
}


string Personne::get_poste()
{
    return "poste";
}

int Personne::get_supp()
{
    return ID_supp;
}

void Personne::setID_pl()
{
    throw gcnew System::NotImplementedException();
    this->ID_pl = ID_pl;
}


void Personne::set_Date_Embauche()
{
    throw gcnew System::NotImplementedException();
    this->Date_Embauche = Date_Embauche;
}

void Personne::set_poste()
{
    throw gcnew System::NotImplementedException();
    this->poste = poste;
}

void Personne::set_ID_supp()
{
    throw gcnew System::NotImplementedException();
    this->ID_supp = ID_supp;
}
