#include <sstream>
#include <NTL/ZZ.h> 
#include "utils.h"

using namespace std;
using namespace NTL;

namespace UtilsImpl{ 
    std::string conver_to_string( const ZZ & number ) { 
        std::ostringstream os;
        os << number; 
        std::string s = os.str();
        return s; 
    }
}

namespace Utils { 

bool is_palindrome( const ZZ & number ) { 

	auto s = UtilsImpl::conver_to_string( number ); 
    size_t len = s.length();
    for ( size_t i=0; i<len/2; i++ ){ 
        if (s[i]!=s[len-1-i]) { 
            return false;
        }
    }
    return true;

}

ZZ get_reverse( const ZZ & number ){

    auto s = UtilsImpl::conver_to_string( number); 
    std::string rev(s.rbegin(), s.rend());
    ZZ result = to_ZZ(rev.c_str()); 
    return result;

}

ZZ get_reverse_and_add( const ZZ & number ) { 
    ZZ rev = get_reverse(number);
    return number + rev; 
}

bool is_lichrel( const ZZ & number, const ushort limit ) { 
    ZZ trial{number};
    for ( size_t i=0; i<limit;  i++ ) { 
        trial = get_reverse_and_add(trial);
        if (is_palindrome( trial )) return false;  
    }
    return true;
} 

}