#pragma once
#include "DatabaseAccess.h"
#include "Produit.h"

using namespace System;

ref class Stats
{
public:
	static String^ Calc_var(Composants::DatabaseAccess^ bdd, String^ tva1, String^ tva2 , String ^ tva3,String^ demarque_i , String ^ marge , String ^ remise);
};

