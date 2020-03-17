#include <iostream>
#include <cmath>

using namespace std;

double podpunkt_a(double ti)
{
    for(int i = 1; i <= 30; i++)
    {
        ti = (sqrt(pow(ti, 2) + 1) - 1) / ti;
        cout << i << ": " << 6 * pow(2, i) * ti << endl;
    }
}
//błąd najpierw maleje, a później rośnie
double podpunkt_b(double ti)
{
    for(int i = 1; i <= 30; i++)
    {
        ti = ti/(sqrt(pow(ti, 2) + 1) + 1);
        cout << i << ": " << 6 * pow(2, i) * ti << endl;
    }
}
//błąd maleje
int main()
{
    double t0 = 1/sqrt(3);
    podpunkt_a(t0);
    podpunkt_b(t0);
    return 0;
}