#include <iostream>
#include "stos.h"
using namespace std;

int main()
{
    Stos stos;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == i % 5)
            stos.push(i);
    }

    cout << stos << endl;
    stos.reverse();

    while (!stos.empty())
    {
        cout << stos.top() << endl;
        stos.pop();
    }
    return 0;
}