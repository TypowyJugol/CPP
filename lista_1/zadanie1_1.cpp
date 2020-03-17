#include <iostream>

using namespace std;

int main()
{
    int n = 40;
    int silnia = 1;
    for(int i = 1; i <= n; i++)
    {
        silnia *= i;
        cout << i << ": "<< silnia << endl;
    }

    //błędne wyniki wynikają z wyjścia poza zakres liczb zmiennej typu int, ktory wynosi -2147483648 ÷ 2147483647

    return 0;
}