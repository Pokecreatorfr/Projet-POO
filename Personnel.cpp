#include "Personnel.h"

DataSet^ Personnel::Search(Composants::DatabaseAccess^ bdd , String^ id, String^ nom, String^ prenom, String^ DateNaissance, String^ DateEmbauche)
{
	String^ query = PersonnelDAO::Search(id, nom, prenom, DateNaissance, DateEmbauche);
	DataSet^ ds = bdd->getRows(query, "tab");
	return ds;
}
