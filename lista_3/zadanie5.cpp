#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //program nie dawał pożądanego rezultatu, pomogła zmiana kolejności 
    //deklaracji zmiennych
    //możliwe jest zalogowanie się do systemu, z powodu nadpisania zmiennej haslo, poprzez przekroczenie zakresu zmiennej tmp
    char tmp[8];
    char haslo[8];
    strcpy(haslo,"Ta.jnE!");
    for( ; ; )
    {
        std::cout << "podaj haslo: ";
        std::cin >> tmp;
        if(strcmp(tmp,haslo) == 0)
            break;
        std::cout << haslo << std::endl;
        std::cout << "przykro mi, haslo jest niepoprawne! \n";
    }
    std::cout << "witaj w systemie! \n";
    return 0;
}


