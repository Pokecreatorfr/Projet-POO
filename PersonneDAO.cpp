#include "PersonneDAO.h"

String^ BDD::PersonneDAO::Delete(String^ id)
{
	String^ query = "DELETE FROM dbo.Personnes WHERE id = '" + id+"'";
	return query;
}

String^ BDD::PersonneDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{
	int a = 0;
	String^ query = "SELECT * FROM dbo.Personnes WHERE ";
	if (id != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "id = '" + id + "'";
		a++;
	}
	if (nom != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "nom = '" + nom + "'";
		a++;
	}
	if (prenom != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "prenom = '" + prenom + "'";
		a++;
	}
	if (date_naissance != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "date_naissance = '" + date_naissance + "'";
		a++;
	}
	query = query->Substring(0, query->Length - 4);
	return query;
}

String^ BDD::PersonneDAO::Update(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{
	String^ query = "UPDATE dbo.Personnes SET ";
	if (nom != "")
	{
		query += "nom = '" + nom + "', ";
	}
	if (prenom != "")
	{
		query += "prenom = '" + prenom + "', ";
	}
	if (date_naissance != "")
	{
		query += "date_naissance = '" + date_naissance + "', ";
	}
	query = query->Substring(0, query->Length - 2);
	query += " WHERE id = '" + id + "'";
	return query;
}

String^ BDD::PersonneDAO::Insert(String^ nom, String^ prenom, String^ date_naissance)
{
	String^ query = "INSERT INTO dbo.Personnes (nom, prenom, date_naissance) VALUES ('" + nom + "', '" + prenom + "', '" + date_naissance + "')";
	return query;
}