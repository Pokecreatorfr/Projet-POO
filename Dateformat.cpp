#include "Dateformat.h"

String^ Dateformat::StringDatetoSQL(String^ str)
{
    String^ date;
	String^ jour = str->Substring(0, 2);
	String^ mois = str->Substring(3, 2);
	String^ annee = str->Substring(6, 4);
	return annee + "-" + mois + "-" + jour;
}

String^ Dateformat::SQLDatetoString(String^ str)
{
	String^ date;
	String^ jour = str->Substring(8, 2);
	String^ mois = str->Substring(5, 2);
	String^ annee = str->Substring(0, 4);
	return jour + "/" + mois + "/" + annee;
}
