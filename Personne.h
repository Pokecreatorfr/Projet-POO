#pragma once
#include <string>
using namespace System;
using namespace std;
ref class Personne
{
 private:
	String^ Nom;
	String^ Prenom;
	DateTime DateNaissance;
	int ID_pl;
	DateTime Date_Embauche;
	String^ poste;
	int ID_supp;

 public:
	Personne();
	Personne(String^ Nom, String^ Prenom, DateTime DateNaissance, int ID_pl, String poste, DateTime Date_Embauche, int ID_supp);
	int get_ID_supp();
	DateTime get_Date_Embauche();
	string get_poste();
	int get_supp();
	void setID_pl();
	void set_Date_Embauche();
	void set_poste();
	void set_ID_supp();
};

