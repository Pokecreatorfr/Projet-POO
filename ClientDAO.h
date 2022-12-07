#pragma once 
using namespace System;
class ClientDAO
{
public:
	static String^ Delete(String^ id);
	static String^ Search(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date);
	static String^ Update(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date);
	static String^ Insert(String^ date, String^ id_ps);
};