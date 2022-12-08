#include "ProduitDAO.h"

String^ ProduitDAO::Delete(String^ id)
{
    String^ query = "DELETE FROM dbo.Produit";
    query += " WHERE ID_pr = " + id + "";
    return query;
}

String^ ProduitDAO::Search(String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	int a = 0;
	String^ query = "SELECT * FROM dbo.Produit WHERE ";
	if (Ref_pr != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Ref_pr = '" + Ref_pr + "'";
		a++;
	}
	if (Designation_pr != "")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Designation_pr = '" + Designation_pr + "'";
		a++;
	}
	if (Prix_HT_actuel_pr != "0")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "Prix_HT_actuel_pr = " + Prix_HT_actuel_pr;
		a++;
	}
	if (TVA_actuelle_pr != "0")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "TVA_actuelle_pr = " + TVA_actuelle_pr ;
		a++;
	}
	if (qte_pr != "0")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "qte_pr = " + qte_pr;
		a++;
	}
	if (SRea_pr != "0")
	{
		if (a > 0)
		{
			query += " AND ";
		}
		query += "SRea_pr = " + SRea_pr;
		a++;
	}
	if (a == 0)
	{
		query = "Select * from dbo.Produit";
	}
	return query;
}

String^ ProduitDAO::Insert(String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	String^ query = "INSERT INTO dbo.Produit (Ref_pr, Designation_pr , Prix_HT_actuel_pr , TVA_actuelle_pr , qte_pr , SREA_pr) VALUES ('" + Ref_pr + "', '" + Designation_pr + "', " + Prix_HT_actuel_pr + " , " + TVA_actuelle_pr + ", " + qte_pr + ", " + SRea_pr + ")";
	return query;
}

String^ ProduitDAO::Update(String^ id, String^ Ref_pr, String^ Designation_pr, String^ Prix_HT_actuel_pr, String^ TVA_actuelle_pr, String^ qte_pr, String^ SRea_pr)
{
	String^ query = "UPDATE dbo.Produit SET Ref_pr = '" + Ref_pr + "', Designation_pr = '" + Designation_pr + "', Prix_HT_actuel_pr = " + Prix_HT_actuel_pr + ", TVA_actuelle_pr = " + TVA_actuelle_pr + ", qte_pr = " + qte_pr + " , SRea_pr =" + SRea_pr + " WHERE ID_pr = " + id + "";
	return query;
}

String^ ProduitDAO::Select_Designation_pr()
{
	return "SELECT Designation_pr FROM dbo.Produit;";
}

