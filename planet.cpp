#include <iostream>
#include <array>
#include <vector>
#include <iterator>

using namespace std;

template <size_t N>
array<double, N> subtract(array<double, N> a, array<double, N> b)
{
    array<double, N> result;
    for (int i = 0; i < a.size(); i++)
    {
        result[i] = b[i] - a[i];
    }

    return result;
}

// array<double, 3> subtract(array<double, 3> a, array<double, 3> b)
// {
//     array<double, 3> result;
//     for (int i = 0; i < a.size(); i++)
//     {
//         result[i] = b[i] - a[i];
//     }

//     return result;
// }

int main()
{
    array<double, 3> b = {2.4324, 3, 5};
    array<double, 3> a = {0, 2, 3};
    array<double, 3> c;

    c = subtract(a, b);
    array<double, 3>::iterator p;
    for (p = c.begin(); p < c.end(); p++)
    {
        cout << *p << endl;
    }

    return 0;
}