#ifndef PLANET_H
#define PLANET_H

#include <array>

using namespace std;

class Planet {
 public:
  void set_m(double m);
  double get_m(void);
  void set_r(array<double, 3> r);
  array<double, 3> get_r(void);
  array<double, 3> get_force(Planet planet);

  Planet(double m, array<double, 3> r);

 private:
  double G = 1;
  double m;
  array<double, 3> r;
};

#endif
