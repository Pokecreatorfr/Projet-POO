#pragma once


class Form_color_change
{
private:
	struct RGB
	{
		int r , g , b;
	};
public:
	static void Change_color_of_pannel_hex(System::Windows::Forms::Panel^ panel, int hex);
	static void Change_color_of_pannel(System::Windows::Forms::Panel^ panel, int r, int g, int b);
};

