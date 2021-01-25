#pragma once

#include "catch.hpp"
#include "chrup.hpp"
using namespace std;

// tutaj klasy Ogorek, Zielony i Kiszony

class Ogorek
{
public:
    virtual std::string chrup();
    string              jedzOgorek(Ogorek* abc)
    {
        if (dynamic_cast< Zielony* >(abc) != nullptr)
        {
            return "Zielony: " + chrup();
        }
        else if (dynamic_cast< Kiszony* >(abc) != nullptr)
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
