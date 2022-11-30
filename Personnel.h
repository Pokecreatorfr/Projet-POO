#pragma once
#include<string>
#include "Personne.h"
ref class Personnel : public Personne 
{private:
	int ID_ps;
	DateTime Date_Embauche;
	String^ poste;
	int ID_supp;

public:
	Personnel();
	Personnel(String^ Nom, String^ Prenom, DateTime DateNaissance, String^ poste, int ID_ps, DateTime Date_Embauche);
	int get_ID_cl();
	void set_ID_cl();
};

