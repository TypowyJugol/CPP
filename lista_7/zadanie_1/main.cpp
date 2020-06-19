#include <iostream>
#include <sstream>

using namespace std;

int function(const char x[]) {
    int out;
    stringstream str(x);
    str >> out;
    return out;
}

int main() {
    cout << typeid(function("123451")).name() << endl;
    return 0;
}