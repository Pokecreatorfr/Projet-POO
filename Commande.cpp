#include "Commande.h"

DataSet^ Commande::Search(Composants::DatabaseAccess^ bdd, String^ id, String^ date_c, String^ date_l, String^ id_cl, String^ ref)
{
	DataSet^ ds = gcnew DataSet();
	String^ query = CommandeDAO::Search(id, date_c, date_l, id_cl, ref);
	ds = bdd->getRows(query, "tab");
	return ds;
}

void Commande::Insert(Composants::DatabaseAccess^ bdd, String^ id_cl, String^ date_c, String^ date_l, String^ ref, System::Collections::Generic::List<String^>^ lste_p, System::Collections::Generic::List<String^>^ lste_qte)
{
	DataSet^ ds = gcnew DataSet();
	DataSet^ ds1 = gcnew DataSet();
	String^ query = CommandeDAO::Insert(date_c, date_l, id_cl, ref);
	bdd->actionRows(query);
	query = CommandeDAO::Search("", date_c, date_l, id_cl, ref);
	ds = bdd->getRows(query, "tab");
	for (int i = 0; i < lste_p->Count; i++)
	{
		ds1 = Produit::Search(bdd, "", "", lste_p[i], "0", "0", "0", "0");
		Insert_Comporte(bdd, ds->Tables["tab"]->Rows[0]["ID_cmd"]->ToString(), ds1->Tables["tab"]->Rows[0]["ID_pr"]->ToString(), lste_qte[i], ds1->Tables["tab"]->Rows[0]["TVA_actuelle_pr"]->ToString(), ds1->Tables["tab"]->Rows[0]["Prix_HT_actuel_pr"]->ToString());
	}
}

void Commande::Delete(Composants::DatabaseAccess^ bdd, String^ id)
{
	String^ query = CommandeDAO::Delete(id);
	bdd->actionRows(query);
}

void Commande::Update(Composants::DatabaseAccess^ bdd, String^ date_c, String^ date_l, String^ id_cl, String^ ref, String^ id)
{
	throw gcnew System::NotImplementedException();
}

void Commande::Insert_Comporte(Composants::DatabaseAccess^ bdd, String^ id_cmd, String^ id_pr, String^ qte, String^ tva, String^ prix)
{
	String^ query = CommandeDAO::Insert_Comporte(id_cmd, id_pr, qte, tva, prix);
	bdd->actionRows(query);
}

DataSet^ Commande::Search_Comporte_from_id(Composants::DatabaseAccess^ bdd, String^ id_cmd)
{
	String^ query = CommandeDAO::Search_Comporte_from_id(id_cmd);
	DataSet^ ds = bdd->getRows(query, "tab");
	return ds;
}
