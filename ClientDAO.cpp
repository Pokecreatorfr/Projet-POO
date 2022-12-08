#include "ClientDAO.h"


String^ ClientDAO::Delete(String^ id)
{
    String^ query = "DELETE FROM dbo.Clients ";
    query += "WHERE ID_cl = " + id ;
    return query;
}

String^ ClientDAO::Search(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{

	int i = 0;
	String^ query = "SELECT dbo.Personnes.ID_ps , Nom_ps , Prenom_ps , DateNaissance_ps , CP_ad , Ville_ad FROM dbo.Clients LEFT JOIN dbo.Personnes ON dbo.Clients.ID_ps = dbo.Personnes.ID_ps LEFT JOIN dbo.Posseder ON dbo.Personnes.ID_ps = dbo.Posseder.ID_ps LEFT JOIN dbo.Adresse ON  dbo.Posseder.ID_ad = dbo.Adresse.ID_ad WHERE ";
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
		query += "Prenom_ps = '" + prenom + "' ";
		i++;
	}
	if (date_naissance != "  /  /")
	{
		if (i > 0)
		{
			query += " AND ";
		}
		query += "DateNaissance_ps = '" + date_naissance + "'";
		i++;
	}
	if (i == 0)
	{
		query = "SELECT dbo.Personnes.ID_ps , Nom_ps , Prenom_ps , DateNaissance_ps , CP_ad , Ville_ad FROM dbo.Clients LEFT JOIN dbo.Personnes ON dbo.Clients.ID_ps = dbo.Personnes.ID_ps LEFT JOIN dbo.Posseder ON dbo.Personnes.ID_ps = dbo.Posseder.ID_ps LEFT JOIN dbo.Adresse ON  dbo.Posseder.ID_ad = dbo.Adresse.ID_ad";
	}
	return query;
}

String^ ClientDAO::Update(String^ id, String^ nom, String^ prenom, String^ date_naissance)
{
	String^ query = "UPDATE Clients SET ";
	return query;
}

String^ ClientDAO::Insert(String^ id_ps)
{
	String^ query = "INSERT INTO dbo.Clients (ID_ps) VALUES (" + id_ps + ")";
	return query;
}
