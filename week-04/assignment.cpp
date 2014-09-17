#include <iostream>
using std::cout;
using std::endl;

int main() {
    int x;
    int y;
    int z;

    x = y = z;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    // be careful with this one

    x = y = z = 5;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    x = 5;
    y = 7;
    z = 11;
    x = x + 1;
    y = y + 2;
    z = x + y + 3;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    x = 5;
    y = 7;
    z = 11;
    z = y;
    y = x;
    x = z;
    z = 11;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
}

