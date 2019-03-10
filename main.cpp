#include "a.hpp"
#include "b.hpp"

#include <iostream>

int main()
{
    char const* s = "{[123]}", *it = s, *end = it + std::strlen(s);
    bool r = parse(it, end, a);
    std::cout << (r ? (it == end ? "ok" : "partial") : "fail") << '\n';
}
