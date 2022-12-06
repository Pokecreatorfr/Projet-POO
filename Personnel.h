#pragma once
#include<string>
#include "Personne.h"
#include "PersonneDAO.h"
#include "PersonnelDAO.h"
#include "DatabaseAccess.h"
ref class Personnel : public Composants::MappingPERSONNE
{
public:
	static DataSet^ Search(Composants::DatabaseAccess ^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche , String^ id_pl_1 , String ^poste);
	static void Delete(Composants::DatabaseAccess^ bdd, String^ id);
};

