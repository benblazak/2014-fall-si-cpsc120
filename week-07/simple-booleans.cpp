#include <iostream>

/**
 * Notes:
 * - Sometimes (especially in documentation) we say "lvalue" instead of "the
 *   value on the left hand side" and "rvalue" instead of "the value on the
 *   right hand side".
 *
 * References:
 * - http://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
 */

int main() {
    bool a = true;
    bool b = false;
    bool c = 1;
    bool d = 0;
    bool e = 5;  // remember automatic type conversion?

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << b << std::endl;
    std::cout << "d = " << b << std::endl;
    std::cout << "e = " << b << std::endl;

    std::cout << std::endl;

    std::cout << "(5 < 2) : " << (5 < 2) << std::endl;
    std::cout << "(2 < 5) : " << (2 < 5) << std::endl;
    std::cout << "(2 <= 5) : " << (2 <= 5) << std::endl;
    std::cout << "(5 >= 5) : " << (5 >= 5) << std::endl;

    std::cout << std::endl;

    // does this make sense? what is it doing? :)
    std::cout << "(\"hello\" < \"world\") : "
              << ("hello" < "world") << std::endl;

    std::cout << std::endl;

    // in C++, `=` is for assignment (so `a = 5` means "set a to 5"), while
    // `==` is for comparison (so `a == 5` means "is a equal to 5?")
    std::cout << "(2 == 5) : " << (2 == 5) << std::endl;
    std::cout << "(5 == 5) : " << (5 == 5) << std::endl;
    std::cout << "('c' == 'c') : " << ('c' == 'c') << std::endl;
    std::cout << "(4.5 == 4.5) : " << (4.5 == 4.5) << std::endl;
    std::cout << "(true == false) : " << (true == false) << std::endl;
    std::cout << "(true == true) : " << (true == true) << std::endl;
    std::cout << "(\"this\" == \"that\") : "
              << ("this" == "that") << std::endl;
    std::cout << "(\"this\" == \"this\") : "
              << ("this" == "this") << std::endl;

    std::cout << std::endl;

    // we often read `!` as "not"
    std::cout << "(!true) : " << (!true) << std::endl;    // not true
    std::cout << "(!false) : " << (!false) << std::endl;  // not false
    std::cout << "(5 != 2) : " << (5 != 2) << std::endl;  // does 5 not equal 2?

    std::cout << std::endl;

    // `&&` means "and": true only if the left value *and* the right value are
    // true
    std::cout << "(true && true) : " << (true && true) << std::endl;
    std::cout << "(true && false) : " << (true && false) << std::endl;
    std::cout << "(false && true) : " << (false && true) << std::endl;
    std::cout << "(false && false) : " << (false && false) << std::endl;

    std::cout << std::endl;

    // `||` means "or": true if either the left value *or* the right value is
    // true
    std::cout << "(true || true) : " << (true || true) << std::endl;
    std::cout << "(true || false) : " << (true || false) << std::endl;
    std::cout << "(false || true) : " << (false || true) << std::endl;
    std::cout << "(false || false) : " << (false || false) << std::endl;

    return 0;
}
