#include "public-circle.h"
#include <cmath>

PublicCircle::PublicCircle() {
    x = 0;
    y = 0;
    r = 1;
}

double PublicCircle::getArea() {
    double pi = 2 * std::acos(0.0);
    double t = std::pow(r, 2) * pi;
    return t;
}

