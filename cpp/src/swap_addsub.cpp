#include "swap_addsub.hpp"

void swap_addsub(int& a, int& b) {
    a = a+b;
    b = a-b;
    a = a-b;
}
