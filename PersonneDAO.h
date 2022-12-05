#pragma once
#include "Personne.h"
//#include<string>
using namespace System;


namespace BDD
{
	ref class PersonneDAO
	{
	private:
		System::String^ sSql;
		int id;
		String^ nom;
		String^ prenom;
		DateTime^ dateNaissance;
		
	public:
		String^ Select(void);
		String^ Create(void);
		String^ Modify(void);
		void setId_Ps(int);
		String^ setNom_Ps(String^);
		void setPrenom_Ps(String^);
		void setDateNaissance_Ps(DateTime^);
		int getId_Ps(void);
		String^ getNom_Ps(void);
		String^ getPrenom_Ps(void);
		DateTime^ getDateNaissance_Ps(void);
	};
}


