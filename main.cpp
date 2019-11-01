#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

double G = 1;

template <size_t N>
void printArray(array<double, N> a)
{
    cout << "vector:" << endl;
    array<double, 3>::iterator p;
    for (p = a.begin(); p < a.end(); p++)
    {
        cout << *p << endl;
    }
}

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

template <size_t N>
array<double, N> multiply(array<double, N> a, double e)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = a[i] * e;
    }

    return a;
}

template <size_t N>
double magnitude(array<double, N> a)
{
    double n;
    for (int i = 0; i < a.size(); i++)
    {
        n += pow(a[i], 2);
    }

    return pow(n, 0.5);
}

template <size_t N>
array<double, N> force21(double m1, array<double, N> r1, double m2, array<double, N> r2)
{
    array<double, 3> diff = subtract(r1, r2);

    return multiply(diff, -1 * G * m1 * m2 * pow(magnitude(diff), -3));
}

int main()
{
    array<double, 3> a = {1, 0, 0};
    array<double, 3> b = {-1, 0, 0};

    array<double, 3> c;

    c = force21(1, a, 1, b);
    // c = multiply(a, 2.7);
    printArray(c);

    // cout << magnitude(c) << endl;

    return 0;
}