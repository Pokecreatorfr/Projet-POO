#include "Produit.h"

array<String^>^ Produit::Select_design(Composants::DatabaseAccess^ bdd)
{
	String^ query = ProduitDAO::Select_Designation_pr();
	DataSet^ ds = bdd->getRows(query, "tab");
	array<String^>^ des = gcnew array<String^> (ds->Tables["tab"]->Rows->Count);
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		des[i] = ds->Tables["tab"]->Rows[i]["Designation_pr"]->ToString();
	}
	return des;
}

DataSet^ Produit::Search(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	String^ query = ProduitDAO::Search(id, Ref_pr, Designation_pr, Prix_HT_actuel_pr, TVA_actuelle_pr, qte_pr, SRea_pr);
	DataSet^ ds = bdd->getRows(query, "tab");
	return ds;
}

void Produit::Delete(Composants::DatabaseAccess^ bdd, String^ id)
{
	String^ query = ProduitDAO::Delete(id);
	bdd->actionRows(query);
}

void Produit::Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	
}

void Produit::Update(Composants::DatabaseAccess^ bdd, String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	String^ query = ProduitDAO::Update(id, Ref_pr, Designation_pr, Prix_HT_actuel_pr, TVA_actuelle_pr, qte_pr, SRea_pr);
	bdd->actionRows(query);
}
