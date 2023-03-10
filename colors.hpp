#include <stdint.h>

class Color
{
       public:
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a;
        explicit Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t a): r(red),g(green),b(blue),a(a){}
        Color(const Color& anotherColor):r(anotherColor.r),g(anotherColor.g),b(anotherColor.b),a(anotherColor.a){}
};

// ------------------------------------------- setting some base colors for the game ----------------------------------------------

const Color BASE_COLORS[] = {
    Color(0x28, 0x28, 0x28, 0xFF),
    Color(0x2D, 0x99, 0x99, 0xFF),
    Color(0x99, 0x99, 0x2D, 0xFF),
    Color(0x99, 0x2D, 0x99, 0xFF),
    Color(0x2D, 0x99, 0x51, 0xFF),
    Color(0x99, 0x2D, 0x2D, 0xFF),
    Color(0x2D, 0x63, 0x99, 0xFF),
    Color(0x99, 0x63, 0x2D, 0xFF)
};

const Color LIGHT_COLORS[] = {
    Color(0x28, 0x28, 0x28, 0xFF),
    Color(0x44, 0xE5, 0xE5, 0xFF),
    Color(0xE5, 0xE5, 0x44, 0xFF),
    Color(0xE5, 0x44, 0xE5, 0xFF),
    Color(0x44, 0xE5, 0x7A, 0xFF),
    Color(0xE5, 0x44, 0x44, 0xFF),
    Color(0x44, 0x95, 0xE5, 0xFF),
    Color(0xE5, 0x95, 0x44, 0xFF)
};

const Color DARK_COLORS[] = {
    Color(0x28, 0x28, 0x28, 0xFF),
    Color(0x1E, 0x66, 0x66, 0xFF),
    Color(0x66, 0x66, 0x1E, 0xFF),
    Color(0x66, 0x1E, 0x66, 0xFF),
    Color(0x1E, 0x66, 0x36, 0xFF),
    Color(0x66, 0x1E, 0x1E, 0xFF),
    Color(0x1E, 0x42, 0x66, 0xFF),
    Color(0x66, 0x42, 0x1E, 0xFF)
};