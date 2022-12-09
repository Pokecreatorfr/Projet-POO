#pragma once 

using namespace System;

class CommandeDAO
{
public:
	static String^ Delete(String^ id);
	static String^ Search(String^ id, String^ date_c , String^ date_l, String^ id_cl, String^ ref);
	static String^ Insert(String^ date_c, String^ date_l, String^ id_cl, String^ ref);
	static String^ Update(String^ date_c, String^ date_l, String^ id_cl, String^ ref, String^ id);
	static String^ Insert_Comporte(String^ id_cmd, String^ id_pr, String^ qte, String^ tva, String^ prix);
	static String^ Search_Comporte_from_id(String^ id_cmd);
};