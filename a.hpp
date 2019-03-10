#include <boost/spirit/home/x3.hpp>

namespace x3 = boost::spirit::x3;

extern x3::rule<class r_a> const a;

BOOST_SPIRIT_DECLARE(decltype(a))
