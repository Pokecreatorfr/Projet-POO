#pragma once


class Form_color_change
{
private:
	struct RGB
	{
		int r , g , b;
	};
	static void Change_color_of_pannel(System::Windows::Forms::Panel^ panel, int r, int g, int b);
	static void Change_color_of_Form(System::Windows::Forms::Form^ from, int r, int g, int b);
public:
	static void Change_color_of_pannel_hex(System::Windows::Forms::Panel^ panel, int hex);
	static void Change_color_of_Form_hex(System::Windows::Forms::Form^ form, int hex);
};

