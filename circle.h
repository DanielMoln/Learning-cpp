#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double x, y, r;

public:
    Circle();
    Circle(double x, double y, double r);

    double getArea();
    double getX();
    double getY();
    double getR();
    void setX(double nx);
    void setY(double ny);
    void setR(double nr);
};

#endif // CIRCLE_H
