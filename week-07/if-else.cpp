#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    int x;  // to store the user's integer

    cout << "Please enter an integer: ";
//     cin >> x;  // we'll just set it manually in the code, for now
    cout << endl;
    x = 15;

    if (x < 0) {
        cout << "Your integer is negative\n";

        if (x % 2 == 0)
            cout << "Your integer is even\n";
        else
            cout << "Your integer is odd\n";

    } else if (x < 1000) {
        cout << "Your integer is fairly small\n";

        if (x % 2 == 0)
            cout << "Your integer is even\n";
        else
            cout << "Your integer is odd\n";

    } else {  // x >= 1000
        cout << "Your integer is fairly large\n";

        if (x % 2 == 0)
            cout << "Your integer is even\n";
        else
            cout << "Your integer is odd\n";
    }

    return 0;  // success
}
