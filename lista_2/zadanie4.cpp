#include <iostream>

unsigned silnia(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n * silnia(n - 1);
}

int main()
{
    for (int i = 0; i < 5; ++i)
        std::cout << i << "!=" << silnia(i) << "\n";
}
//Wywołanie powyższej funkcji z argumentem -1 daje błąd, wynikia to z zastosowania typu unsigned który przyjmuje wartości od 0 do 65535