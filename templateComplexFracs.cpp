#include "ComplexFracs.hpp"

void ComplexFrac::print() const {
    if (!real.isZero()) {
        real.print();
        if (imag.isPositive()) { std::cout << "+"; }
    }
    if (!imag.isZero()) { imag.print();  std::cout << "*i"; }
    if ( real.isZero() && imag.isZero() ) { std::cout << 0; }
}
