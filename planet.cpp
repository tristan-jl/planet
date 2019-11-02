#include "Planet.hpp"
#include "utils.hpp"

Planet::Planet(double mass, array<double, 3> pos) {
  m = mass;
  r = pos;
}

void Planet::set_m(double mass) { m = mass; }

double Planet::get_m(void) { return m; }

void Planet::set_r(array<double, 3> pos) { r = pos; }

array<double, 3> Planet::get_r(void) { return r; }

array<double, 3> Planet::get_force(Planet otherPlanet) {
  return utils::force21(G, otherPlanet.get_m(), otherPlanet.get_r(), m, r);
}
