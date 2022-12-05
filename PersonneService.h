#pragma once
#include "Connection.h"
#include "PersonneDAO.h"

namespace NS_Comp_Svc
{
	ref class PersonneService
	{
	private:
		BDD::Connection^ Conn;
		BDD::PersonneDAO^ PersDAO;
	public:
		PersonneService(void);
		void CreatePersonne(String^ Nom, String^ Prenom);// , DateTime DateNaissance);
		//void ModifyPersonne(int ID_Ps, String^ Nom, String^ Prenom, DateTime DateNaissance);
		//void DeletePersonne(int ID_Ps);
		DataSet^ SelectPersonne(System::String^ dataTableName);
	};
};
