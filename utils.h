
#pragma once

#include <NTL/ZZ.h>

using namespace NTL;

namespace Utils { 

    bool is_palindrome( const ZZ & number );

    ZZ get_reverse( const ZZ & number );

    bool is_lichrel( const ZZ & number, const ushort limit=50 ); 
}