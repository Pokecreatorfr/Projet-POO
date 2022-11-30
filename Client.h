#pragma once
#include<string>
#include"Personne.h"
using namespace std;
ref class Client : public Personne

{private:
	int ID_cl;

 public:
	 Client();
	 Client(int ID_cl,int ID_ps,string NOM,string Prenom,DateTime Date);
	 int get_ID_cl();
	 void set_ID_cl();

};

