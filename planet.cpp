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

void Planet::set_v(array<double, 3> vel) { v = vel; }

array<double, 3> Planet::get_v(void) { return v; }

void Planet::set_a(array<double, 3> acc) { a = acc; }

array<double, 3> Planet::get_a(void) { return a; }

array<double, 3> Planet::get_force_from(Planet otherPlanet) {
  return utils::force21(G, otherPlanet.get_m(), otherPlanet.get_r(), m, r);
}
