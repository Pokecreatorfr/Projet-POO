#include "Liste_Adresse.h"

String^ Liste_Adresse::return_postal_code(String^ city)
{
	for (int i = 0; i < 39193; i++)
	{
		if (lste_adr[i,1] == city)
		{
			return lste_adr[i, 0];
		}
	}
	
}

array<String^>^ Liste_Adresse::return_city(String^ postal_code)
{
	int a = 0;
	for (int i = 0; i < 39193; i++)
	{
		if (lste_adr[i, 0] == postal_code)
		{
			a++;
		}
	}
	array<String^>^ city = gcnew array<String^>(a);
	int b = 0;
	for (int i = 0 ; i < 39193 ; i++)
	{
		if (lste_adr[i, 0] == postal_code)
		{
			city[b] = lste_adr[i, 1];
			b++;
		}
	}
	a = 1;
	return city;
}

System::Boolean^ Liste_Adresse::is_postal_code(String^ postal_code)
{
	for (int i = 0; i < 39193; i++)
	{
		if (lste_adr[i, 0] == postal_code)
		{
			return true;
		}
	}
	return false;
}