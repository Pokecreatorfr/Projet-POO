#include "Client.h"

Client::Client()
{
    throw gcnew System::NotImplementedException();
}

Client::Client(int ID_cl, int ID_ps, string Nom, string Prenom, DateTime Date)
{
    throw gcnew System::NotImplementedException();
   ID_cl = ID_cl;
   ID_ps = ID_ps;
   Nom = Nom;
   Prenom = Prenom;
   Date = Date;
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
