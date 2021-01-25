#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>
using namespace std;

// tutaj algorytm liczKolejneWarzywa

template < typename T >
bool liczKolejneWarzywa(T a, T b, unsigned n, const std::string s)
{
    return search_n(a, b, n, s, );
}

/*
The function returns an iterator to the first of such elements, or last if no such sequence is found.

first, last
Forward iterators to the initial and final positions of the searched sequence. The range used is
[first,last), which contains all the elements between first and last, including the element pointed
by first but not the element pointed by last.

count
Minimum number of successive elements to match.
Size shall be (convertible to) an integral type.

val
Individual value to be compared, or to be used as argument for pred (in the second version).
for the first version, T shall be a type supporting comparisons with the elements pointed by
InputIterator using operator== (with the elements as left-hand size operands, and val as right-hand
side).

pred
Binary function that accepts two arguments (one element from the sequence as first, and
val as second), and returns a value convertible to bool. The value returned indicates whether the
element is considered a match in the context of this function. The function shall not modify any of
its arguments.

*/
