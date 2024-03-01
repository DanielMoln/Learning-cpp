#include "pont.h"
#include <iostream>
#include <cmath>

Pont::Pont() {
    _x = 0;
    _y = 0;
}

void Pont::mozgat(int dx, int dy) {
    _x += dx;
    _y += dy;

    std::cout << "Mozgatott: " << std::endl;
    std::cout << "x: " << _x << std::endl;
    std::cout << "y: " << _y << std::endl;
}

void Pont::mozgatFellulir(int dx, int dy, bool fellulir) {
    if (fellulir) {
        _x = dx;
        _y = dy;
    }
    else
    {
        _x = dx;
        _y = dy;
    }

    std::cout << "Mozgatott: " << std::endl;
    std::cout << "x: " << _x << std::endl;
    std::cout << "y: " << _y << std::endl;
}

void Pont::tukroz(int cx, int cy) {
    std::cout << "Koordinata x " << (cx+(cx-_x)) << std::endl;
    std::cout << "Koordinata y " << (cy+(cy-_y)) << std::endl;
}

void Pont::tukor(Pont pont) {
    std::cout << "Koordinata x " << (-pont._x) << std::endl;
    std::cout << "Koordinata y " << (-pont._y) << std::endl;
}

void Pont::tavolsag(Pont pont) {
    int d = std::sqrt((std::pow((_x-pont._x), 2)) + (std::pow((_y-pont._y), 2)));
    std::cout << d << std::endl;
}
