#pragma once 
#include <string>
using namespace std;
using namespace System;
ref class Produit
{
private:
	int ID_PR;
	int Ref;
	String^ Designation;
	float Prix_HT;
	float TVA_actuelle;
	int qte;
	int SRea;

public:
	Produit();
	Produit(int ID_PR, int Ref, String^ Designation, float Prix_HT, float TVA_actuelle, int qte, int SRea);
	int get_ID_PR();
	int get_Ref();
	String^ get_Designation();
	float get_Prix_HT();
	float get_TVA_actuelle();
	int get_qte();
	int get_SRea();
    void set_ID_PR();
	void set_Ref();
	void set_Designation();
	void set_Prix_HT();
	void set_TVA_actuelle();
	void set_qte();
	void set_SRea();
};
