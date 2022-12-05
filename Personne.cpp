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
        "FROM dbo.Personnes;";
}

String^ MappingPERSONNE::INSERT(String^ nom, String^ prenom)
{
    return "INSERT INTO dbo.Personnes " +
        "(Nom_Ps, Prenom_Ps) " +
        "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "');SELECT @@IDENTITY;";
}

String^ MappingPERSONNE::UPDATE()
{
    return "UPDATE dbo.Personnes " +
        "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "' ";
}

String^ MappingPERSONNE::DELETE()
{
    return "DELETE FROM dbo.Personnes ";
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
