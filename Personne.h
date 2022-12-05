#pragma once
//#include <string>
using namespace System;

ref class Personne
{
 private:
	int ID_Ps;
	String^ Nom;
	String^ Prenom;
	DateTime DateNaissance;
	
 public:
	Personne();
	Personne(String^ Nom, String^ Prenom, DateTime DateNaissance);
	String^ getNom();
	String^ getPrenom();
	int get_ID_Ps();
	DateTime getDateNaissance();

};

