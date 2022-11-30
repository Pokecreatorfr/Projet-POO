#include "Client.h"

Client::Client()
{
    throw gcnew System::NotImplementedException();
}

Client::Client(int ID_cl, String^ Nom, String^ Prenom, DateTime DateNaissance, DateTime Date)
{
    throw gcnew System::NotImplementedException();
    ID_cl = ID_cl;
    Nom = Nom;
    Prenom = Prenom;
    DateNaissance = DateNaissance;
    
}



int Client::get_ID_cl()
{
    return ID_cl;
}

void Client::set_ID_cl()
{
    throw gcnew System::NotImplementedException();
    ID_cl = ID_cl;
}

void Client::set_Date()
{
    throw gcnew System::NotImplementedException();
    this->Date=Date;
}

DateTime Client::get_Date()
{
    return DateTime();
}

