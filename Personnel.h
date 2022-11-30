#pragma once
#include<string>
#include "Personne.h"
ref class Personnel : public Personne 
{private:
	int ID_Ps;
public:
	Personnel();
	Personnel(int ID_Cli, int ID_ps, string Nom, DateTime Date_Embauche);
	int get_ID_cl();
	void set_ID_cl();
};

