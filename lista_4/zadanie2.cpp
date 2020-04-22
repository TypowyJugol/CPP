#include <iostream>
#include "Zespolona.h"

using namespace std;

int main()
{
    Zespolona z1(1, 1);
    Zespolona z2(3, 3);
    Zespolona z3;
    cout << z1 + z2 << endl;
    cout << z1 - z2 << endl;
    cout << z1 * z2 << endl;
    cout << z1 / z2 << endl;
    cin >> z3;
    cout << z3 << endl;
    return 0;
}