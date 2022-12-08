#include "PersonnelDAO.h"

String^ PersonnelDAO::Delete(String^ id)
{
    String^ query = "DELETE FROM dbo.Personnel";
    query += " WHERE ID_pl = " + id+ "";
    return query;
}

String^ PersonnelDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date_embauche, String^ id_pl_1, String^ poste)
{
	int a = 0;
	String^ query = "SELECT * FROM dbo.Personnel LEFT JOIN dbo.Personnes ON dbo.Personnel.ID_ps = dbo.Personnes.ID_ps LEFT JOIN dbo.Posseder ON dbo.Personnes.ID_ps = dbo.Posseder.ID_ps LEFT JOIN dbo.Adresse ON  dbo.Posseder.ID_ad = dbo.Adresse.ID_ad WHERE ";
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
	if (date_naissance != "  /  /")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "DateNaissance_ps = '" + date_naissance + "'  ";
		a++;
	}
	if (date_embauche != "  /  /")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "DateEmbauche_pl = '" + date_embauche + "'  ";
		a++;
	}
	if (id_pl_1 != "NULL")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "ID_pl_1 = '" + id_pl_1 + "'  ";
		a++;
	}
	if (poste != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Poste_pl = '" + poste + "'  ";
		a++;
	}
	if (a == 0)
	{
		query = "SELECT * FROM dbo.Personnel LEFT JOIN dbo.Personnes ON dbo.Personnel.ID_ps = dbo.Personnes.ID_ps LEFT JOIN dbo.Posseder ON dbo.Personnes.ID_ps = dbo.Posseder.ID_ps LEFT JOIN dbo.Adresse ON  dbo.Posseder.ID_ad = dbo.Adresse.ID_ad";
	}
	return query;
}

String^ PersonnelDAO::Insert(String^ date_embauche , String ^ id_ps, String^ id_pl_1 , String ^poste )
{
	String^ query = "INSERT INTO dbo.Personnel (DateEmbauche_pl, ID_ps , ID_pl_1 , Role_pl) VALUES ('" + date_embauche + "', " + id_ps + ", " + id_pl_1 + " , '" + poste +"')";
	return query;
}

String^ PersonnelDAO::Update(String^ date_embauche, String^ id_ps, String^ id_pl_1, String^ poste, String^ id)
{
	String^ query = "UPDATE dbo.Personnel SET DateEmbauche_pl = '" + date_embauche + "', ID_ps = " + id_ps + ", ID_pl_1 = " + id_pl_1 + ", Role_pl = '" + poste + "' WHERE ID_pl = " + id + "";
	return query;
}
