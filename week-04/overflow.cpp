#include <iostream>
using std::cout;
using std::endl;

int main() {
             int a = 2147483647;  // 2^31-1 = 2147483647
    unsigned int b = 4294967295;  // 2^32-1 = 4294967295

    cout << "a   = " << a   << endl;
    cout << "a+1 = " << a+1 << endl;
    cout << "b   = " << b   << endl;
    cout << "b+1 = " << b+1 << endl;

    return 0;
}

