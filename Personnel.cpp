#include "Personnel.h"

Personnel::Personnel()
{
    throw gcnew System::NotImplementedException();
}

Personnel::Personnel(String^ Nom, String^ Prenom, DateTime DateNaissance,String^ poste, int ID_ps, DateTime Date_Embauche)
{
    throw gcnew System::NotImplementedException();
    Nom = Nom;
    Prenom = Prenom;
    DateNaissance = DateNaissance;
    ID_ps = ID_ps;
    Date_Embauche = Date_Embauche;
    poste = poste;

}


int Personnel::get_ID_cl()
{
    return ID_ps;
}

void Personnel::set_ID_cl()
{
    throw gcnew System::NotImplementedException();
    this->ID_ps = ID_ps;
}

