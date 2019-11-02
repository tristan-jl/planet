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

  void set_v(array<double, 3> v);

  array<double, 3> get_v(void);

  void set_a(array<double, 3> a);

  array<double, 3> get_a(void);
  
  array<double, 3> get_force_from(Planet planet);

  Planet(double m, array<double, 3> r);

 private:
  double G = 1;
  double m;
  array<double, 3> r;
  array<double, 3> v;
  array<double, 3> a;
};

#endif
