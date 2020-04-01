#include <iostream>

using namespace std;

int main()
{
    double tab[10];
    double x;

    cout << &x << "\t" << &tab[-1] << "\n";
    return 0;
}

//to samo zjawisko występuje też na moim komputerze, dzieje się tak dlatego, że adres zmiennej x jest taki sam jak tab[-1], 
//błędne indeksowanei tablic może doprowadzić do nadpisania danych znajdujących się poza nia
