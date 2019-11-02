#include <math.h>
#include <iostream>
#include "Planet.hpp"
#include "utils.hpp"

using namespace std;
using namespace utils;

template <size_t N>
void print_array(array<double, N> a) {
  cout << "vector:" << endl;
  array<double, 3>::iterator p;
  for (p = a.begin(); p < a.end(); p++) {
    cout << *p << endl;
  }
}

int main() {
  Planet planet1(1.0, array<double, 3>{0.5, 0, 0});
  Planet planet2(1.0, array<double, 3>{-0.5, 0, 0});
  cout << planet1.get_force(planet2)[0] << endl;

  return 0;
}