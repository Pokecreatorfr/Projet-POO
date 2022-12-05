#pragma once
#include<string>
#include"Personne.h"
using namespace std;

ref class Client : public Composants::MappingPERSONNE

{private:
	int ID_cl;
	DateTime Date;

 public:
	 Client();
	 Client(int ID_cl,String^ Nom,String^ Prenom,DateTime DateNaissance,DateTime Date);
	 int get_ID_cl();
	 void set_ID_cl();
	 void set_Date();
	 DateTime get_Date();

};

