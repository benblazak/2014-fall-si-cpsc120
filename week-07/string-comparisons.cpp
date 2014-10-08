#include <iostream>
#include <string>    // needed for `std::string`
#include <cstring>   // needed for `strcmp()`

/**
 * Notes:
 * - The code `std::string("this")` casts the string literal (which is really a
 *   cstring) to a `string` object.  If we were using `using namespace std;` it
 *   would only be `string("this")`, and would look a little more normal.
 *
 * References:
 * - string library reference (see the "compare" function, near the bottom)
 *   http://www.cplusplus.com/reference/string/string/
 * - `strcmp` function reference, from the cstring library
 *   http://www.cplusplus.com/reference/cstring/strcmp/
 */

int main() {

    // can't really rewrite this one.  what would it mean to say one string was
    // less than another anyway?

//     std::cout << "(\"hello\" < \"world\") : "
//               << ("hello" < "world") << std::endl;

    // the second two can be rewritten though

    std::cout << "std::string(\"this\").compare(\"that\") : "
              << std::string("this").compare("that")
              << std::endl;

    std::cout << "std::string(\"this\").compare(\"this\") : "
              << std::string("this").compare("this")
              << std::endl;

    // note that we could also avoid the string library altogether, using the
    // cstring library functions instead.  it would probably be better not to
    // do this though, at least during this class, as it's really better form
    // in C++ to do things the C++ way; unless for performance reasons you find
    // you can't.

    std::cout << "strcmp(\"this\", \"that\") : " 
              << strcmp("this", "that") 
              << std::endl;

    std::cout << "strcmp(\"this\", \"this\") : " 
              << strcmp("this", "this") 
              << std::endl;

    return 0;
}
