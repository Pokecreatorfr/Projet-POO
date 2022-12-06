#include "PersonnelDAO.h"

String^ PersonnelDAO::Delete(String^ id)
{
    String^ query = "DELETE FROM 'Personnel'";
    query += "WHERE 'ID_pl' = " + id;
    return query;
}

String^ PersonnelDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date_embauche)
{
	int i = 0;
	String^ query = "SELECT * FROM dbo.Personnel FULL JOIN dbo.Personnes ON dbo.Personnel.ID_ps = dbo.Personnes.ID_ps WHERE ";
    if (id != "")
    {
		if (i > 0)
		{
			query += " AND ";
		}
		query += "ID_pl = " + id;
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
	if (date_embauche != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "Date_embauche_pl = " + date_embauche;
		i++;
	}
	return query;
}

String^ PersonnelDAO::Update(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date_embauche)
{
	String^ query = "UPDATE Personnel SET ";
	return query;
}