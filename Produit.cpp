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
