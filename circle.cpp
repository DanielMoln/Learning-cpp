#include "circle.h"
#include <stdexcept>
#include <cmath>

Circle::Circle() {
    x = 0;
    y = 0;
    r = 1;
}

double Circle::getR() {
    return r;
}

double Circle::getX() {
    return x;
}

double Circle::getY() {
    return y;
}

double Circle::getArea() {
    double pi = 2 * std::acos(0.0);
    double t = std::pow(r, 2) * pi;
    return t;
}

void Circle::setR(double nr) {
    if (r <= 0) {
        throw std::invalid_argument("Negativ szamot nem adhatsz meg!");
    }

    r = nr;
}

void Circle::setX(double nx) {
    if (nx <= 0) {
        throw std::invalid_argument("Negativ erteket nem adhatsz meg!");
    }

    x = nx;
}

void Circle::setY(double ny) {
    if (ny <= 0) {
        throw std::invalid_argument("Negativ erteket nem adhatsz meg");
    }

    y = ny;
}
