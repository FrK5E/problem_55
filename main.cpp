#include <iostream>
#include <NTL/ZZ.h>
#include "utils.h"

using namespace NTL;




int main()
{
    ZZ a{1}; 
    auto tst = Utils::is_palindrome( ZZ{101} );

    for ( size_t i =0; i<200; i++ ) { 
          a = a * 2;
    }

    std::cout << a << std::endl;
}

 