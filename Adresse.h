#pragma once
#include<string>
using namespace std;
using namespace System;
ref class Adresse
{
	private:
		int ID_ad;
		String^ Ville;
		String^ Rue;
		int CP;
		String^ infosup;

	public:
		Adresse();
		Adresse(int ID_ad, String^ Ville, String^ Rue, int CP, String^ infosup);
		int get_ID_ad();
		String^ get_Ville();
		String^ get_Rue();
		int get_CP();
		String^ get_infosup();
		void set_Ville();
		void set_Rue();
		void set_CP();
		void set_infosup();



};


