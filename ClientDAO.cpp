#include "ClientDAO.h"

String^ ClientDAO::Delete(String^ id)
{
    String^ query = "DELETE FROM dbo.Clients";
    query += "WHERE ID_cl = '" + id + "'";
    return query;
}

String^ ClientDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date)
{

	int i = 0;
	String^ query = "SELECT * FROM dbo.Clients FULL JOIN dbo.Personnes ON dbo.Clients.ID_ps = dbo.Personnes.ID_ps WHERE ";
	if (id != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "ID_cl= " + id;
		i++;
	}
	if (nom != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Nom_ps = '" + nom + "'";
		i++;
	}
	if (prenom != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Prenom_ps = " + prenom;
		i++;
	}
	if (date_naissance != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Date_naissance_ps = " + date_naissance;
		i++;
	}
	if (date != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "date = " + date;
		i++;
	}
	return query;
}

String^ ClientDAO::Update(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date)
{
	String^ query = "UPDATE Clients SET ";
	return query;
}

String^ ClientDAO::Insert(String^ date, String^ id_ps)
{
	String^ query = "INSERT INTO dbo.Clients (Date, ID_ps) VALUES ('" + date + "', " + id_ps + ")";
	return query;
}
