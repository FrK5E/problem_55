#include <sstream>
#include <NTL/ZZ.h> 
#include "utils.h"

using namespace std;
using namespace NTL;

namespace Utils { 

bool is_palindrome( const ZZ & number ) { 

	std::ostringstream os;
    os << number; 
	std::string s = os.str(); 

    size_t len = s.length();
    for ( size_t i=0; i<len/2; i++ ){ 
        if (s[i]!=s[len-1-i]) { 
            return false;
        }
    }
    return true;

}

}