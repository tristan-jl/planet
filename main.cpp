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
    cout << *p << ", ";
  }
  cout << endl;
}

int main() {
  Planet planet0(1.0, array<double, 3>{0.5, 0, 0});
  Planet planet1(1.0, array<double, 3>{-0.5, 0, 0});
  Planet planet2(1.0, array<double, 3>{0, 2, 0});

  const int n_planets = 3;
  array<Planet, n_planets> planets = {planet0, planet1, planet2};
  array<array<array<double, 3>, n_planets>, n_planets> planet_forces;

  for (int i = 0; i < n_planets; i++) {
    for (int j = i; j < n_planets; j++) {
      cout << i << j << endl;
      if (i == j) {
        planet_forces[i][j] = {0, 0, 0};
        continue;
      } else {
        planet_forces[i][j] = planet_forces[j][i] =
            planets[i].get_force_from(planets[j]);
        cout << "a" << endl;
        print_array(planets[i].get_r());
        print_array(planets[j].get_r());
        
      }
      print_array(planet_forces[i][j]);
      //sum x index to get total force on x
    }
  }

  //   cout << planet1.get_force(planet2)[0] << endl;

  return 0;
}
