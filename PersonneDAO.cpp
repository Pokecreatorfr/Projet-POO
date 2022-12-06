#include "PersonneDAO.h"

String^ BDD::PersonneDAO::Delete(String^ id)
{
	String^ query = "DELETE FROM dbo.Personnes WHERE ID_ps = '" + id+"'";
	return query;
}

String^ BDD::PersonneDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{
	int a = 0;
	String^ query = "SELECT * FROM dbo.Personnes WHERE ";
	if (nom != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Nom_ps = '" + nom + "'";
		a++;
	}
	if (prenom != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Prenom_ps = '" + prenom + "'";
		a++;
	}
	if (date_naissance != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "DateNaissance_ps = '" + date_naissance + "'  ";
		a++;
	}
	return query;
}

String^ BDD::PersonneDAO::Update(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{
	String^ query = "UPDATE dbo.Personnes SET ";
	if (nom != "")
	{
		query += "Nom_ps = '" + nom + "', ";
	}
	if (prenom != "")
	{
		query += "Prenom_ps = '" + prenom + "', ";
	}
	if (date_naissance != "")
	{
		query += "DateNaissance_ps = '" + date_naissance + "', ";
	}
	query = query->Substring(0, query->Length - 2);
	query += " WHERE id = '" + id + "'";
	return query;
}

String^ BDD::PersonneDAO::Insert(String^ nom, String^ prenom, String^ date_naissance)
{
	String^ query = "INSERT INTO dbo.Personnes (Nom_ps, Prenom_ps, DateNaissance_ps) VALUES ('" + nom + "', '" + prenom + "', '" + date_naissance + "')";
	return query;
}