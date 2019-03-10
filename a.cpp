#include "a.hpp"

#include "b.hpp"


x3::rule<class r_a> const a {"a"};

auto const a_def = ('{' >> b >> '}') | x3::int_;

BOOST_SPIRIT_DEFINE(a)
BOOST_SPIRIT_INSTANTIATE(decltype(a), char const*, x3::unused_type)
