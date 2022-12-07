#include "Commande.h"

DataSet^ Commande::Search(Composants::DatabaseAccess^ bdd, String^ id, String^ date_c, String^ date_l, String^ id_cl, String^ ref)
{
	DataSet^ ds = gcnew DataSet();
	String^ querry = CommandeDAO::Search(id, date_c, date_l, id_cl, ref);
	ds = bdd->getRows(querry, "tab");
	return ds;
}

void Commande::Insert(Composants::DatabaseAccess^ bdd, String^ date_c, String^ date_l, String^ id_cl, String^ ref)
{
	throw gcnew System::NotImplementedException();
}

void Commande::Delete(Composants::DatabaseAccess^ bdd, String^ id)
{
	throw gcnew System::NotImplementedException();
}
