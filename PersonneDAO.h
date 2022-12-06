#pragma once
#include "Personne.h"
#include<string>

using namespace System;


namespace BDD
{
	ref class PersonneDAO
	{
	public:
		static String^ Delete(String^ id);
		static String^ Search(String^ id, String^ nom, String^ prenom, String^ date_naissance);
		static String^ Update(String^ id, String^ nom, String^ prenom, String^ date_naissance);
		static String^ Insert(String^ nom, String^ prenom, String^ date_naissance);
	};
}


