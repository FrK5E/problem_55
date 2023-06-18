
#define BOOST_TEST_MODULE test module name
#include <boost/test/included/unit_test.hpp>
#include "utils.h"


BOOST_AUTO_TEST_CASE( test1 ) {
    NTL::ZZ a{101};
    BOOST_CHECK_EQUAL(Utils::is_palindrome(a), true);

    a = 103;
    BOOST_CHECK_EQUAL(Utils::is_palindrome(a), false);
    
     

}

BOOST_AUTO_TEST_CASE( test2) {
    NTL::ZZ a{105};
    NTL::ZZ b{501}; 
    BOOST_CHECK_EQUAL(Utils::get_reverse(a), b );

}


BOOST_AUTO_TEST_CASE( test3) {
    NTL::ZZ a{47};
    BOOST_CHECK_EQUAL(Utils::is_lichrel(a), false );

    a = 349;
    BOOST_CHECK_EQUAL(Utils::is_lichrel(a, 2), true );
    BOOST_CHECK_EQUAL(Utils::is_lichrel(a, 3), false );

    a = 10677;
    BOOST_CHECK_EQUAL( Utils::is_lichrel(a, 50), true);
    BOOST_CHECK_EQUAL( Utils::is_lichrel(a, 53), false);


}
