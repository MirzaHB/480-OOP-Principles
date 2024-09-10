// Circle.h by Hassan Baig UCID:30149393
#include "Shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : virtual public Shape
{
private:
    double radius;

public:
    Circle(double x, double y, double rad, const char *name);
    void display() const;
    double perimeter() const;
    double area() const;
    double getRad() const;
    void setRad(double newRad);
    Circle &operator=(const Circle &obj);
};

#endif