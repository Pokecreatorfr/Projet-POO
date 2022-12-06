#pragma once
#include<string>
#include "Personne.h"
#include "PersonnelDAO.h"
#include "DatabaseAccess.h"
ref class Personnel : public Composants::MappingPERSONNE
{
public:
	static DataSet^ Search(Composants::DatabaseAccess ^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche);
};

