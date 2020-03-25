#include <iostream>
#include <vector>

using namespace std;

double operator*(vector<double> v, vector<double> w)
{
    double wynik = 0;
    for (int i = 0; i < v.size(); i++)
    {
        wynik += v[i] * w[i];
    }
    return wynik;
}

int main()
{
    vector<double> v = {5, 1};
    vector<double> w = {5, 1};
    cout << v * w << endl;
    return 0;
}