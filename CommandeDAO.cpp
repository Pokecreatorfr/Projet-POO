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
	return query;
}
