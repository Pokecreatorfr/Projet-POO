#pragma once 
using namespace System;
class ClientDAO
{
public:
	static String^ Delete(String^ id);
	static String^ Search(String^ id, String^ nom, String^ prenom, String^ date_naissance);
	static String^ Update(String^ id_p, String^ id_c);
	static String^ Insert(String^ id_ps);
};