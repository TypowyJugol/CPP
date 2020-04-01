#include <iostream>
#include <vector>
using namespace std;


double function(double* tab[], int n)
{
    return 12.5;
}

void fun_g(int *x)
{
    *x = 5;
}

int main()
{
    //a)
    double tab_a[100];
    double* wsk = tab_a;
    //b)
    char *tab_b[5][5];
    //c)
    int n;
    char *const tab_c = new char[n];
    //d)
    vector<void*> t;
    //e)
    vector<double>tab_e[4]; 
    //f)
    double (*function)(double*,int);
    //Przykłąd G
    int x = 0;
    fun_g(&x);
    return 0;
}