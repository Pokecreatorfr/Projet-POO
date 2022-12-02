#include "Paiement.h"

Paiement::Paiement()
{
	throw gcnew System::NotImplementedException();

}

Paiement::Paiement(int ID_P, String^ Moyen_Paiement, DateTime Date, float Montant, int ID_Adresse)
{
	throw gcnew System::NotImplementedException();
	this->ID_P = ID_P;
	this->Moyen_Paiement = Moyen_Paiement;
	this->Date = Date;
	this->Montant = Montant;
	this->ID_Adresse = ID_Adresse;
	

}

int Paiement::get_ID_P()
{
	return this->ID_P;
}

String^ Paiement::get_Moyen_Paiement()
{
	throw gcnew System::NotImplementedException();
	return Moyen_Paiement;

}

DateTime Paiement::get_Date()
{
	return Date;
}

float Paiement::get_Montant()
{
	return Montant;
}

int Paiement::get_ID_Adresse()
{
	return ID_Adresse;
}

void Paiement::set_Moyen_Paiement()
{
	throw gcnew System::NotImplementedException();
}

void Paiement::set_Date()
{
	throw gcnew System::NotImplementedException();
}

void Paiement::set_Montant()
{
	throw gcnew System::NotImplementedException();
}

void Paiement::set_ID_P()
{
	throw gcnew System::NotImplementedException();
}
