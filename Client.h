#pragma once
#include<string>
#include "Personne.h"
#include "PersonneDAO.h"
#include "ClientDAO.h"
#include "DatabaseAccess.h"
using namespace std;

ref class Client : public Composants::MappingPERSONNE
{
	static DataSet^ Search(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ Date);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ Date);
};

