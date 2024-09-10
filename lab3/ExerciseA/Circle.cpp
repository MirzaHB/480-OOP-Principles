// Circle.cpp by Hassan Baig UCID:30149393
#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double x, double y, double rad, const char *name) : Shape(x, y, name), radius(rad) {}

double Circle::area() const
{
    return 3.14 * radius * radius;
}

double Circle::perimeter() const { return 2 * 3.14 * radius; }

void Circle::display() const
{
    Shape::display();
    cout << "Radius: " << radius << endl;
}
double Circle::getRad() const { return radius; }
void Circle::setRad(double rad) { radius = rad; }
Circle &Circle::operator=(const Circle &obj)
{
    if (this != &obj)
    {
        Shape::operator=(obj);
        this->radius = obj.radius;
    }
    return *this;
}