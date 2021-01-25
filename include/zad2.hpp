#pragma once

#include "catch.hpp"
#include "chrup.hpp"
using namespace std;

// tutaj klasy Ogorek, Zielony i Kiszony

class Ogorek
{
public:
    virtual std::string chrup() = 0;

}

class Zielony : public Ogorek
{
public:
    std::string chrup() { return chrupZielony(); }
}

class Kiszony : public Ogorek
{
    std::string chrup() { return chrupKiszony(); }
}

std::string jedzOgorek(Ogorek* abc)
{
    if (dynamic_cast< Zielony* >(abc) != nullptr)
    {
        return "Zielony: " + abc->chrup();
    }
    else if (dynamic_cast< Kiszony* >(abc) != nullptr)
    {
        return "Kiszony: " + abc->chrup();
        ;
    }
}
