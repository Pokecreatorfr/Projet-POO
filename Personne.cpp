#include "Personne.h" 

using namespace Composants;

MappingPERSONNE::MappingPERSONNE()
{
    this->Nom = "RIEN";
    this->Prenom = "RIEN";
}

String^ MappingPERSONNE::SELECT()
{
    return "SELECT Nom, Prenom, Date  " +
        "FROM TB_PERSONNE;";
}

String^ MappingPERSONNE::INSERT()
{
    return "INSERT INTO TB_PERSONNE " +
        "(Nom, Prenom) " +
        "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
}

String^ MappingPERSONNE::UPDATE()
{
    return "UPDATE TB_PERSONNE " +
        "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' ";
}

String^ MappingPERSONNE::DELETE()
{
    return "DELETE FROM TB_PERSONNE ";
}

void MappingPERSONNE::setPrenom(String^ prenom)
{
    if (!String::IsNullOrEmpty(prenom))
    {
        this->Prenom = prenom;
    }
}

void MappingPERSONNE::setNom(String^ nom)
{
    if (!String::IsNullOrEmpty(nom))
    {
        this->Nom = nom;
    }
}

String^ MappingPERSONNE::getNom()
{
    return this->Nom;
}

String^ MappingPERSONNE::getPrenom()
{
    return this->Prenom;
}
