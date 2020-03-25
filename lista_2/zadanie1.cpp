#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min(vector<int> vector)
{
    if (vector.empty())
    {
        return INT8_MIN;
    }
    else
    {
        int min = *min_element(vector.begin(), vector.end());
        return min;
    }
}

int main()
{
    vector<int> v = {2, 5, 8, 4};
    cout << min(v);
    return 0;
}