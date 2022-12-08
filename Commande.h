#pragma once
#include "CommandeDAO.h"
#include "Produit.h"
#include "DatabaseAccess.h"

using namespace System;

ref class Commande
{
public:
	static DataSet^ Search(Composants::DatabaseAccess^ bdd, String^ id, String^ date_c, String^ date_l, String^ id_cl, String^ ref);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ id_cl, String^ date_c, String^ date_l, String^ ref , System::Collections::Generic::List<String^>^ lste_p , System::Collections::Generic::List<String^>^ lste_qte);
	static void Delete(Composants::DatabaseAccess^ bdd, String^ id);
	static void Update(Composants::DatabaseAccess^ bdd, String^ date_c, String^ date_l, String^ id_cl, String^ ref, String^ id);
	static void Insert_Comporte(Composants::DatabaseAccess^ bdd, String^ id_cmd, String^ id_pr, String^ qte, String^ tva, String^ prix);
};