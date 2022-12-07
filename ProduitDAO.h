#pragma once

using namespace System;

class ProduitDAO
{
public:
	static String^ Delete(String^ id);
	static String^ Search(String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr);
	static String^ Insert(String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr);
	static String^ Update(String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr);
	static String^ Select_Designation_pr();
};