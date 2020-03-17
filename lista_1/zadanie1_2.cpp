#include <iostream>
#include <cmath>

using namespace std;

double podpunkt_a(int n) {
    double wynik = 0;
    for(int j = 1; j <= n; j++)
    {
        wynik += ((pow(-1, j+1)) / (2*j-1));
    }
    wynik *= 4;
    return wynik;
}

double podpunkt_b(int n) {
    double wynik = 1;
    for(int j = 1; j <= n; j++)
    {
        wynik *= ((4*pow(j, 2))/((4*pow(j, 2))-1));
    }
    return 2 * wynik;
}

double podpunkt_c(int n) {
    double wynik = 0;
    for(int j = 1; j <= n; j++)
    {
        wynik += 1/pow(2*j-1, 2);
    }
    return sqrt(8 * wynik);
}


int main(){
    cout << M_PI - podpunkt_a(1000000) << endl;
    cout << M_PI - podpunkt_b(1000000) << endl;
    cout << M_PI - podpunkt_c(1000000) << endl;
    
    return 0;
}