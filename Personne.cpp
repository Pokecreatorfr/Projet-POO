#include "Personne.h" 

using namespace Composants;

MappingTBPERSONNE::MappingTBPERSONNE()
{
    this->idPersonne = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
}

String^ MappingTBPERSONNE::SELECT()
{
    return "SELECT id_personne, nom, prenom " +
        "FROM TB_PERSONNE;";
}

String^ MappingTBPERSONNE::INSERT()
{
    return "INSERT INTO TB_PERSONNE " +
        "(nom, prenom) " +
        "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
}

String^ MappingTBPERSONNE::UPDATE()
{
    return "UPDATE TB_PERSONNE " +
        "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
        "WHERE(id_personne = " + this->getId() + ");";
}

String^ MappingTBPERSONNE::DELETE()
{
    return "DELETE FROM TB_PERSONNE " +
        "WHERE(id_personne = " + this->getId() + ");";
}

void MappingTBPERSONNE::setID(int id)
{
    if (id > 0)
    {
        this->idPersonne = id;
    }
}

void MappingTBPERSONNE::setPrenom(String^ prenom)
{
    if (!String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

void MappingTBPERSONNE::setNom(String^ nom)
{
    if (!String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

int MappingTBPERSONNE::getId()
{
    return this->idPersonne;
}

String^ MappingTBPERSONNE::getNom()
{
    return this->nom;
}

String^ MappingTBPERSONNE::getPrenom()
{
    return this->prenom;
}