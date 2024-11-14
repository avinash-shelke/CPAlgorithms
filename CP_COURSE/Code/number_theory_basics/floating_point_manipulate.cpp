// Manipulating Default Format
// setprecision(n) - Changes the default precision.
// showpoint() - shows trailing zeros, noshowpoint() reverts it.
// showpos() - Show + sign for positive values. no showpos() reverts it.
// uppercase() - prints 'e' as 'E'. nouppercase() reverts it.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setprecision(4);
    double x = 15.5683, y = 34267.1;
    cout << x << ' ' << y << ' ' << '\n';
    double z = 1.23;
    cout << showpoint << z << '\n';
    cout << showpos << z << '\n';
    cout << uppercase << y << '\n';
    return 0;
}
