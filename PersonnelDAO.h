#pragma once
using namespace System;

class PersonnelDAO
{
public:
	static String^ Delete(String^ id);
	static String^ Search(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date_embauche);
	static String^ Update(String^ id, String^ nom, String^ prenom, String^ date_naissance, String^ date_embauche);
	static String^ Insert(String^ date_embauche, String^ id_ps, String^ id_pl_1 , String^ poste );
};