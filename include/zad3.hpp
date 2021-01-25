#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe

template < typename T >

class gotujZupe
{
public:
    unsigned gotujZupe(const Warzywo& w, const T& t) { return t.gotujZupe(w) * t.gotujZupe(w); }
};
