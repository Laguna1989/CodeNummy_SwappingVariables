#include "swap_language.hpp"
#include <utility>

void swap_language_stdswap(int& a, int& b) {
    std::swap(a,b);
}

void swap_language_stdexchange(int& a, int& b) {
    b = std::exchange(a,b);
}
