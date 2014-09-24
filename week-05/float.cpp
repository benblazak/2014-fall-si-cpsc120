// Lots of good information about floating point numbers is on Wikipedia:
// http://en.wikipedia.org/wiki/Single-precision_floating-point_format

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setprecision;

int main() {
    cout << "float(0)      = " << float(0) << endl;
    cout << "float(1)      = " << float(1) << endl;
    cout << "float(1e38)   = " << float(1e38) << endl;
    cout << "float(1e39)   = " << float(1e39) << endl;
    cout << "float(1e-39)  = " << float(1e-39) << endl;
    cout << "float(1e-40)  = " << float(1e-40) << endl;
    cout << "float(1e-45)  = " << float(1e-45) << endl;
    cout << "float(1e-46)  = " << float(1e-46) << endl;
    cout << endl;
    cout << setprecision(20) << "float(1234567890123467890) = "
         << float(1234567890123467890) << endl;

    return 0;  // success
}
