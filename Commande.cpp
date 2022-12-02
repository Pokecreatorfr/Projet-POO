#include "Commande.h"

Commande::Commande()
{
	throw gcnew System::NotImplementedException();
}

Commande::Commande(int ID_cmd, int Ref_cmd, DateTime Date_cmd, DateTime Date_liv, int ID_P, int ID_cl, int ID_ad)
{
	throw gcnew System::NotImplementedException();
	this->ID_cmd = ID_cmd;
	this->Ref_cmd = Ref_cmd;
	this->Date_cmd = Date_cmd;
	this->Date_liv = Date_liv;
	this->ID_P = ID_P;
	this->ID_cl = ID_cl;
	this->ID_ad = ID_ad;
}

int Commande::get_ID_cmd()
{
	return ID_cmd;
}

int Commande::get_Ref_cmd()
{
	return Ref_cmd;
}

DateTime Commande::get_Date_cmd()
{
	return Date_cmd;
}
 DateTime Commande::get_Date_liv()
{
	return Date_liv;
}

 int Commande::get_ID_P()
 {
	 return ID_P;
 }

 int Commande::get_ID_cl()
 {
	 return ID_cl;
 }

 int Commande::get_ID_ad()
 {
	 return ID_ad;
 }

 void Commande::set_ID_cmd()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_Ref_cmd()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_Date_cmd()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_Date_liv()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_ID_P()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_ID_cl()
 {
	 throw gcnew System::NotImplementedException();
 }

 void Commande::set_ID_ad()
 {
	 throw gcnew System::NotImplementedException();
 }


