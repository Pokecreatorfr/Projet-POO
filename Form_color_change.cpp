#include "Form_color_change.h"

void Form_color_change::Change_color_of_pannel_hex(System::Windows::Forms::Panel^ panel, int hex)
{
    struct RGB color;
    color.r = ((hex >> 16) & 0xFF);
    color.g = ((hex >> 8) & 0xFF);
    color.b = ((hex) & 0xFF);
    Change_color_of_pannel(panel, color.r, color.g, color.b);
}

void Form_color_change::Change_color_of_pannel(System::Windows::Forms::Panel^ panel, int r, int g, int b)
{
    panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(r)), static_cast<System::Int32>(static_cast<System::Byte>(g)),static_cast<System::Int32>(static_cast<System::Byte>(b)));;
}
