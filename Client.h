#pragma once
#include "Personne.h"
#include "PersonneDAO.h"
#include "ClientDAO.h"
#include "DatabaseAccess.h"
using namespace System;

ref class Client : public Composants::MappingPERSONNE
{
public:
	static DataSet^ Search(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance);
	static void Delete(Composants::DatabaseAccess^ bdd, String^ id);
};

