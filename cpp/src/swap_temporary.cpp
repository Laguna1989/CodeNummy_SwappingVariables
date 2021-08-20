#include "swap_temporary.hpp"
void swap_temporary(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
