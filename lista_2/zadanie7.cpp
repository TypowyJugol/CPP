#include <iostream>

int nwd(int x, int y)
{
    if (x == 0 and y == 0)
        return -1;
    x = std::abs(x);
    y = std::abs(y);
    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}
int main()
{
    std::cout << nwd(9, 6) << std::endl;
    return 0;
}