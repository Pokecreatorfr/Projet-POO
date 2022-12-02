#include "Adresse.h"

Adresse::Adresse()
{
    throw gcnew System::NotImplementedException();
}

Adresse::Adresse(int ID_ad, String^ Ville, String^ Rue, int CP, String^ infosup)
{
    throw gcnew System::NotImplementedException();
    this->ID_ad = ID_ad;
    this->Ville = Ville;
    this->Rue = Rue;
    this->CP = CP;
    this->infosup;
}

int Adresse::get_ID_ad()
{
    return ID_ad;
}

String^ Adresse::get_Ville()
{
    throw gcnew System::NotImplementedException();
    return Ville;
}

String^ Adresse::get_Rue()
{
    throw gcnew System::NotImplementedException();
    return Rue;
}

int Adresse::get_CP()
{
    return CP;
}

String^ Adresse::get_infosup()
{
    throw gcnew System::NotImplementedException();
    return infosup;
}

void Adresse::set_Ville()
{
    throw gcnew System::NotImplementedException();
   
}

void Adresse::set_Rue()
{
    throw gcnew System::NotImplementedException();
}

void Adresse::set_CP()
{
    throw gcnew System::NotImplementedException();
}

void Adresse::set_infosup()
{
    throw gcnew System::NotImplementedException();
}


