#include <iostream>
#include <NTL/ZZ.h>

using namespace std;
using namespace NTL;


int main()
{
    ZZ a{1}; 

    for ( size_t i =0; i<200; i++ ) { 
          a = a * 2;
    }

    std::cout << a << std::endl;
}

