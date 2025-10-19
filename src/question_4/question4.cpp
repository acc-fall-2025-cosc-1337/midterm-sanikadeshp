// question4.cpp
#include "question4.h"

// Used by automated test setup
bool test_config()
{
    return true;
}

// Converts a decimal integer to hexadecimal manually (no built-in functions)
string decimal_to_hex(int num)
{
    string hex = "";
    char hex_chars[] = {'0','1','2','3','4','5','6','7','8','9',
                        'A','B','C','D','E','F'};

    if (num == 0)
        return "0";

    while (num > 0)
    {
        int remainder = num % 16;
        hex = hex_chars[remainder] + hex; // prepend character
        num /= 16;
    }

    return hex;
}
