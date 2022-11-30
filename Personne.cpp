#include "Personne.h"

Personne::Personne()
{
    throw gcnew System::NotImplementedException();
}

Personne::Personne(String^ Nom, String^ Prenom, DateTime DateNaissance)
{
    throw gcnew System::NotImplementedException();
    Nom = Nom;
    Prenom = Prenom;
    DateNaissance = DateNaissance;
}

String^ Personne::getNom()
{
    return Nom;
}

String^ Personne::getPrenom()
{
    return Prenom;
}

int Personne::get_ID_Ps()
{
    return ID_Ps;
}

DateTime Personne::getDateNaissance()
{
    return DateNaissance;
}