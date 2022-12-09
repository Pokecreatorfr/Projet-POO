#include "Stats.h"

String^ Stats::Calc_var(Composants::DatabaseAccess^ bdd, String^ tva1, String^ tva2, String^ tva3, String^ demarque_i, String^ marge, String^ remise)
{
	DataSet^ ds = Produit::Select_all(bdd);
	double result = 0.0;
	double temp;
	double tva1_d = Convert::ToDouble(tva1);
	double tva2_d = Convert::ToDouble(tva2);
	double tva3_d = Convert::ToDouble(tva3);
	double demarque_i_d = Convert::ToDouble(demarque_i);
	double marge_d = Convert::ToDouble(marge);
	double remise_d = Convert::ToDouble(remise);
	array<String^>^ list_tva = gcnew array<String^>(ds->Tables["tab"]->Rows->Count);
	array<String^>^ list_prix = gcnew array<String^>(ds->Tables["tab"]->Rows->Count);
	array<String^>^ list_qte = gcnew array<String^>(ds->Tables["tab"]->Rows->Count);
	array<String^>^ list_marge = gcnew array<String^>(ds->Tables["tab"]->Rows->Count);
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		list_tva[i] = ds->Tables["tab"]->Rows[i]["TVA_actuelle_pr"]->ToString();
	}
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		list_prix[i] = ds->Tables["tab"]->Rows[i]["Prix_HT_actuel_pr"]->ToString();
	}
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		list_qte[i] = ds->Tables["tab"]->Rows[i]["qte_pr"]->ToString();
	}
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		list_marge[i] = ds->Tables["tab"]->Rows[i]["Marge_pr"]->ToString();
	}
	for (int i = 0; i < ds->Tables["tab"]->Rows->Count; i++)
	{
		temp = Convert::ToDouble(list_prix[i]) * Convert::ToDouble(list_qte[i]);
		temp = temp * (1 + (marge_d / 100));
		temp = temp * (1 - (remise_d / 100));
		if (list_tva[i] == "5")
		{
			temp = temp * (1 + tva1_d / 100);
		}
		else if (list_tva[i] == "10")
		{
			temp = temp * (1 + tva2_d / 100);
		}
		else if (list_tva[i] == "20")
		{
			temp = temp * (1 + tva3_d / 100);
		}
		temp = temp * (1 - (demarque_i_d / 100));
		result += temp;
	}
	return result.ToString();
}
