#include "Personne.h"
#include "PersonneDAO.h"
#include <string>
using namespace System;

 String^ BDD::PersonneDAO::Select(void)
{
	return "SELECT [ID_ps], [Nom_ps], [Prenom_ps], [DateNaissance_ps] FROM [Personnes].[dbo]";

}
 String^ BDD::PersonneDAO::Create(void)
{
	 return "INSERT INTO Personnes " +
		 "(Nom_Ps, Prenom_Ps, DateNaissance_ps) " +
		 // @@identify - Fonction système qui retourne la dernière valeur d'identité insérée.
		 "VALUES('" + this->getNom_Ps() + "', '" + this->getPrenom_Ps() + "',  '" + this->getDateNaissance_Ps() + "');SELECT @@IDENTITY;";
}
 String^ BDD::PersonneDAO::Modify(void)
 {
	 return "UPDATE TB_PERSONNE " +
		 "SET nom = '" + this->getNom_Ps() + "', prenom = '" + this->getPrenom_Ps() + "', dateNaissance = '" + this->getDateNaissance_Ps() + "'" +
		 "WHERE(id_personne = " + this->getId_Ps() + ");";
 }


void BDD::PersonneDAO::setId_Ps(int Id_ps)
{
this->id = Id_ps;
}
void BDD::PersonneDAO::setNom_Ps( String^ Nom_Ps)
{
	this->nom = Nom_Ps;
}
void BDD::PersonneDAO::setPrenom_Ps( String^ Prenom_Ps)
{
	this->prenom = Prenom_Ps;
}
void BDD::PersonneDAO::setDateNaissance_Ps(DateTime DateNaissance_Ps)
{
	this->dateNaissance = DateNaissance_Ps;
}


int BDD::PersonneDAO::getId_Ps(void) 
{
	return this->id; 
}

String^ BDD::PersonneDAO::getNom_Ps(void) 
{
	return this->nom;
}

String^ BDD::PersonneDAO::getPrenom_Ps(void) 
{
	return this->prenom; 
}

DateTime BDD::PersonneDAO::getDateNaissance_Ps(void) 
{
	return this->dateNaissance; 
}

 //






