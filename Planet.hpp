#include <array>

using namespace std;

class Planet
{
public:
    void setM(double m);
    double getM(void);
    void setR(array<double, 3> r);
    array<double, 3> getR(void);

    Planet(double m, array<double, 3> r);

private:
    double m;
    array<double, 3> r;
};
