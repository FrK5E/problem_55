
#define BOOST_TEST_MODULE test module name
#include <boost/test/included/unit_test.hpp>
#include "utils.h"


BOOST_AUTO_TEST_CASE( test1 ) {
    NTL::ZZ a{101};
    BOOST_CHECK_EQUAL(Utils::is_palindrome(a), true);

    a = 103;
    BOOST_CHECK_EQUAL(Utils::is_palindrome(a), false);

}