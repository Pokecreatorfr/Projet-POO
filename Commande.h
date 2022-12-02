#pragma once
#include<String>
using namespace std;
using namespace System;

ref class Commande
{
private:
	int ID_cmd;
	int Ref_cmd;
	DateTime Date_cmd;
	DateTime Date_liv;
	int ID_P;
	int ID_cl;
	int ID_ad;

public:
	Commande();
	Commande(int ID_cmd, int Ref_cmd, DateTime Date_cmd, DateTime Date_liv, int ID_P, int ID_cl,int ID_ad);
	int get_ID_cmd();
	int get_Ref_cmd();
	DateTime get_Date_cmd();
	DateTime get_Date_liv();
	int get_ID_P();
	int get_ID_cl();
	int get_ID_ad();
	void set_ID_cmd();
	void set_Ref_cmd();
	void set_Date_cmd();
	void set_Date_liv();
	void set_ID_P();
	void set_ID_cl();
	void set_ID_ad();


};