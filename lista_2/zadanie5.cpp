#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

static vector<int> fib3 = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n > 1)
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibo2(int n)
{
    double Fn = 1 / sqrt(5) * (pow(2 / (sqrt(5) - 1), n) - pow(-2 / (sqrt(5) + 1), n));
    return Fn;
}

int fibo3(int n)
{
    return fib3[n];
}

int main()
{
    cout << fibonacci(10) << endl;
    cout << fibo2(10) << endl;
    cout << fibo3(10) << endl;
    return 0;
}