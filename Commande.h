#pragma once
#include "CommandeDAO.h"
#include "DatabaseAccess.h"

using namespace System;

ref class Commande
{
public:
	static DataSet^ Search(Composants::DatabaseAccess^ bdd, String^ id, String^ date_c, String^ date_l, String^ id_cl, String^ ref);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ date_c, String^ date_l, String^ id_cl, String^ ref);
	static void Delete(Composants::DatabaseAccess^ bdd, String^ id);
	static void Update(Composants::DatabaseAccess^ bdd, String^ date_c, String^ date_l, String^ id_cl, String^ ref, String^ id);
};