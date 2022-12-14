#include "Personnel.h"


DataSet^ Personnel::Search(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche, String^ id_pl_1, String^ poste)
{
	DataSet^ ds = gcnew DataSet();
	String^ query = PersonnelDAO::Search(id, nom, prenom, DateNaissance, DateEmbauche, id_pl_1, poste);
	ds = bdd->getRows(query, "tab");
	return ds;
}

void Personnel::Insert(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche, String^ id_pl_1 , String ^poste)
{
	String^ p = BDD::PersonneDAO::Search(id, nom, prenom, DateNaissance);
	DataSet^ ds = bdd->getRows(p, "tab");
	if (ds->Tables["tab"]->Rows->Count == 0)
	{
		String^ query = BDD::PersonneDAO::Insert(nom, prenom, DateNaissance);
		bdd->actionRows(query);
		ds = bdd->getRows(p, "tab");
	}
	String^ query = PersonnelDAO::Insert(DateEmbauche, ds->Tables["tab"]->Rows[0]["ID_ps"]->ToString(), id_pl_1 , poste);
	bdd->actionRows(query);
}

void Personnel::Delete(Composants::DatabaseAccess^ bdd, String^ id)
{
	String^ query = PersonnelDAO::Delete(id);
	bdd->actionRows(query);
}

void Personnel::Update(Composants::DatabaseAccess^ bdd, String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche, String^ id_pl_1, String^ poste)
{
	String^ p = BDD::PersonneDAO::Search(id, nom, prenom, DateNaissance);
	DataSet^ ds = bdd->getRows(p, "tab");
	if (ds->Tables["tab"]->Rows->Count == 0)
	{
		String^ query = BDD::PersonneDAO::Insert(nom, prenom, DateNaissance);
		bdd->actionRows(query);
		ds = bdd->getRows(p, "tab");
	}
	String^ query = PersonnelDAO::Update(DateEmbauche, ds->Tables["tab"]->Rows[0]["ID_ps"]->ToString(), id_pl_1, poste, id);
	bdd->actionRows(query);
}
