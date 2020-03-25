#include <iostream>
#include <vector>

using namespace std;

void zero(vector<double> vector)
{
    if (!vector.empty())
    {
        fill(vector.begin(), vector.end(), 0);
    }
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << endl;
    }
}

int main()
{
    vector<double> v = {7.5, 5.5, 16, 8};
    zero(v);
    return 0;
}