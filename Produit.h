#pragma once 
#include "ProduitDAO.h"
#include "DatabaseAccess.h"

using namespace System;

ref class Produit
{
public:
	static array<String^>^ Select_design(Composants::DatabaseAccess^ bdd);
};
