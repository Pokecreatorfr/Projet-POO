#pragma once 
#include "ProduitDAO.h"
#include "DatabaseAccess.h"

using namespace System;

ref class Produit
{
public:
	static array<String^>^ Select_design(Composants::DatabaseAccess^ bdd);
	static DataSet^ Search(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr);
	static void Delete(Composants::DatabaseAccess^ bdd, String^ id);
	static void Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr , String^ Marge_pr);
	static void Update(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr, String^ Marge_pr);
	static DataSet^ Select_all(Composants::DatabaseAccess^ bdd);
};
