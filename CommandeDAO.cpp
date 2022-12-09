#include "CommandeDAO.h"

String^ CommandeDAO::Delete(String^ id)
{
	return "DELETE FROM dbo.Commandes WHERE ID_cmd = " + id + ";";
}

String^ CommandeDAO::Search(String^ id, String^ date_c, String^ date_l, String^ id_cl, String^ ref)
{
	int i = 0;
	String^ query = "SELECT * FROM dbo.Commandes WHERE ";
	if (id != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "ID_cmd = " + id;
		i++;
	}
	if (date_c != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Date_cmd = '" + date_c + "'";
		i++;
	}
	if (date_l != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "DateLiv_cmd = '" + date_l + "' ";
		i++;
	}
	if (id_cl != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "ID_cl = " + id_cl;
		i++;
	}
	if (ref != "")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Ref_cmd = '" + ref + "'";
		i++;
	}
	if (i == 0)
	{
		query = "SELECT * FROM dbo.Commandes";
	}
	return query;
}

String^ CommandeDAO::Insert(String^ date_c, String^ date_l, String^ id_cl, String^ ref)
{
	String^ query = "INSERT INTO dbo.Commandes (Date_cmd, DateLiv_cmd, ID_cl, Ref_cmd) VALUES ('" + date_c + "', '" + date_l + "', " + id_cl + ", '" + ref + "');";
	return query;
}

String^ CommandeDAO::Update(String^ date_c, String^ date_l, String^ id_cl, String^ ref, String^ id)
{
	String^ query = "UPDATE Commandes SET ";
	int i = 0;
	if (date_c != "  /  /")
	{
		if (i > 0)
		{
			query += ", ";
		}
		query += "Date_cmd = '" + date_c + "'";
		i++;
	}
	if (date_l != "  /  /")
	{
		if (i > 0)
		{
			query += ", ";
		}
		query += "DateLiv_cmd = '" + date_l + "' ";
		i++;
	}
	if (id_cl != "")
	{
		if (i > 0)
		{
			query += ", ";
		}
		query += "ID_cl = " + id_cl;
		i++;
	}
	if (ref != "")
	{
		if (i > 0)
		{
			query += ", ";
		}
		query += "Ref_cmd = '" + ref + "'";
		i++;
	}
	query += " WHERE ID_cmd = " + id + ";";
	return query;
}

String^ CommandeDAO::Insert_Comporte(String^ id_cmd, String^ id_pr, String^ qte, String^ tva, String^ prix)
{
	String^ query = "INSERT INTO dbo.Comporte (ID_cmd, ID_pr, Qte, TVA, prix_Un_HT) VALUES (" + id_cmd + ", " + id_pr + ", " + qte + ", " + tva + ", " + prix + ");";
	return query;
}

String^ CommandeDAO::Search_Comporte_from_id(String^ id_cmd)
{
	String^ query = "SELECT * FROM dbo.Comporte WHERE ID_cmd = " + id_cmd + ";";
	return query;
}
