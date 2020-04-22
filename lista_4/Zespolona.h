#include <cmath>
using namespace std;

class Zespolona
{
public:
    double rz;
    double ur;

    Zespolona(double r = 1.0, double u = 1.0) : rz(r), ur(u) {}

    friend ostream &operator<<(ostream &output, Zespolona const &a)
    {
        output << "(" << a.rz << "," << a.ur << ")";
        return output;
    }

    friend istream &operator>>(istream &input, Zespolona &a)
    {
        cout << "Czesc rzeczywista: ";
        input >> a.rz;
        cout << "Czesc zespolona: ";
        input >> a.ur;
        return input;
    }
};

Zespolona operator+(Zespolona const &a, Zespolona const &b)
{
    Zespolona c;
    c.rz = a.rz + b.rz;
    c.ur = a.ur + b.ur;
    return c;
}

Zespolona operator-(Zespolona const &a, Zespolona const &b)
{
    Zespolona c;
    c.rz = a.rz - b.rz;
    c.ur = a.ur - b.ur;
    return c;
}

Zespolona operator*(Zespolona const &a, Zespolona const &b)
{
    Zespolona c;
    c.rz = a.rz * b.rz - a.ur * b.ur;
    c.ur = a.rz * b.ur + a.ur * b.rz;
    return c;
}

Zespolona operator/(Zespolona const &a, Zespolona const &b)
{
    Zespolona c;
    c.rz = (a.rz * b.rz + a.ur * b.ur) / pow(b.rz, 2) + pow(b.ur, 2);
    c.ur = (b.rz * a.ur - a.rz * b.ur) / pow(b.rz, 2) + pow(b.ur, 2);
    return c;
}