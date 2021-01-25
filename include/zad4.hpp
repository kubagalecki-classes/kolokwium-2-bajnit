#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa

void jedzOstatnieWarzywa(const std::vector< Warzywo >& warzywka, unsigned n, std::ostream& o)
{

    if (warzywka.size() >= n)
    {
        throw std::logic_error("err");
    }

   
}
