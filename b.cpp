#include "b.hpp"

#include "a.hpp"


x3::rule<class r_b> const b {"b"};

auto const b_def = ('[' >> a >> ']') | x3::int_;

BOOST_SPIRIT_DEFINE(b)
BOOST_SPIRIT_INSTANTIATE(decltype(b), char const*, x3::unused_type)
