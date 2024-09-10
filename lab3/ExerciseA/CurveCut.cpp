// CurveCut.cpp by Hassan Baig UCID:30149393
#include "CurveCut.h"
#include "Circle.h"
#include "Rectangle.h"

#include <iostream>
using namespace std;

CurveCut::CurveCut(double x, double y, double sideA, double sideB, double rad, const char *name)
    : Shape(x, y, name), Circle(x, y, rad, name), Rectangle(x, y, sideA, sideB, name) {}

double CurveCut::area() const
{
    return Rectangle::area() - (Circle::area() / 4);
}

void CurveCut::display() const
{
    Shape::display();
    cout << "Width: " << Rectangle::get_side_a() << endl;
    cout << "Length: " << Rectangle::get_side_b() << endl;
    cout << "Radius of the cut: " << Circle::getRad() << endl;
}
double CurveCut::perimeter() const
{
    return Rectangle::perimeter() - Circle::getRad() * 2 + Circle::perimeter() / 4;
}

CurveCut::CurveCut(const CurveCut &other) : Shape(other), Circle(other), Rectangle(other) {}

CurveCut &CurveCut::operator=(const CurveCut &other)
{
    if (this != &other)
    {
        Circle::operator=(other);
        Rectangle::operator=(other);
    }
    return *this;
}
