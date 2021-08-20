#include "swap_muldiv.hpp"
void swap_muldiv(int& a, int& b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}
