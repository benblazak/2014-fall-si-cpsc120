#include <iostream>
using std::cout;
using std::endl;

int main() {
    cout << "'a'              = " << 'a' << endl;
    cout << "char(97)         = " << char(97) << endl;
    cout << "'a'+5            = " << 'a'+5 << endl;
    cout << "char(97)+5       = " << char(97)+5 << endl;
    cout << "char('a'+5)      = " << char('a'+5) << endl;
    cout << "char(char(97)+5) = " << char(char(97)+5) << endl;
    cout << "char(97)+char(5) = " << char(97)+char(5) << endl;
    cout << endl;
    cout << "int('a')    = " << int('a') << endl;
    cout << "double('a') = " << double('a') << endl;
    cout << "int(97)     = " << int(97) << endl;
    cout << "double(97)  = " << double(97) << endl;
    cout << "int(5.7)    = " << int(5.7) << endl;
    cout << "double(5.7) = " << double(5.7) << endl;
    cout << "char(98)    = " << char(98) << endl;
    cout << "char(98.6)  = " << char(98.6) << endl;
    cout << endl;
    cout << "1/2                   = " << 1/2 << endl;
    cout << "1/2.0                 = " << 1/2.0 << endl;
    cout << "2147483647 + 10       = " << 2147483647 + 10 << endl;
    cout << "2147483647 + 10L      = " << 2147483647 + 10L << endl;
    cout << "long(2147483647 + 10) = " << long(2147483647 + 10) << endl;
    cout << "long(2147483647) + 10 = " << long(2147483647) + 10 << endl;

    return 0;  // success
}

