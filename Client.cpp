#include "Client.h"
DataSet^ Client::Search(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ Date)
{
	String^ query = ClientDAO::Search(id, nom, prenom, DateNaissance, Date);
	DataSet^ ds = bdd->getRows(query, "tab");
	return ds;
}

void Client::Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ Date)
{
	String^ p = BDD::PersonneDAO::Search(id, nom, prenom, DateNaissance);
	DataSet^ ds = bdd->getRows(p, "tab");
	if (ds->Tables["tab"]->Rows->Count == 0)
	{
		String^ query = BDD::PersonneDAO::Insert(nom, prenom, DateNaissance);
		bdd->actionRows(query);
		ds = bdd->getRows(p, "tab");
	}
	String^ query = ClientDAO::Insert(Date, ds->Tables["tab"]->Rows[0]["ID_ps"]->ToString());
	bdd->actionRows(query);
}
