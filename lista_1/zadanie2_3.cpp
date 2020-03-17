#include <iostream>

using namespace std;

int main()
{
    int x = 1;//2
    int y = x++;//0
    int z = --y + x;//4
    int v = z += 2;//4
    cout << x << endl << y << endl << z << endl << v << endl;

    return 0;
}