#include <iostream>
#include <NTL/ZZ.h>
#include "utils.h"

using namespace NTL;




int main()
{

    size_t count {0};
    for ( size_t i = 1; i<=10000; i++ ) {

        if (Utils::is_lichrel(NTL::to_ZZ(i), 50)) { 
            count++;
        } 

    }

    std::cout << count << std::endl;
}

 