#pragma once

#include "catch.hpp"
#include "chrup.hpp"
using namespace std;

// tutaj klasy Ogorek, Zielony i Kiszony

class Ogorek
{
public:
    virtual std::string chrup()

        std::string jedzOgorek(Ogorek* abc)
    {
        if (abc == Zielony)
        {
            return "Zielony: " + chrup();
        }
        if (abc == Kiszony)
        {
            return "Kiszony: " + chrup();
        }
    }
}

class Zielony : public Ogorek
{
public:
    virtual std::string chrup() { return chrupZielony(); }
}

class Kiszony : public Ogorek
{
    virtual std::string chrup() { return chrupKiszony(); }
}
