#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

// tutaj klasa Warzywo

class Warzywo
{
private:
    std::string     nazwa;
    double          cena;
    int             kolor;
    static unsigned liczba_warzyw;

public:
    Warzywo(const std::string& s, double d, int i)
    {
        nazwa = s;
        cena  = d;
        kolor = i;
        liczba_warzyw++;
    }

    unsigned getVeg() { return liczba_warzyw; }

    void opis(std::ostream& stream) const // drukowanie do strumienia
    {
        stream << nazwa << ": " << cena << ", " << kolor << endl;
    }

    ~Warzywo() { liczba_warzyw--; }
}
