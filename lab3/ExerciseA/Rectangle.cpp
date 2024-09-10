// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Rectangle.cpp

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double side_a,
                     double side_b, const char *name) : Shape(x, y, name), Square(x, y, side_a, name), side_b(side_b) {}

double Rectangle::area() const
{
    return side_a * side_b;
}

double Rectangle::perimeter() const
{
    return 2 * (side_a + side_b);
}

double Rectangle::get_side_b() const
{
    return side_b;
}
double Rectangle::get_side_a() const
{
    return side_a;
}
void Rectangle::set_side_b(const double length)
{
    side_b = length;
}
void Rectangle::set_side_a(double toSet)
{
    Square::set_side_a(toSet);
}
void Rectangle::display() const
{
    cout << "Rectangle Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getX() << endl;
    cout << "Y-coordinate: " << getOrigin().getY() << endl;
    cout << "Side a: " << get_side_a() << endl;
    cout << "Side b: " << get_side_b() << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

Rectangle::Rectangle(const Rectangle &other)
    : Shape(other.getOrigin().getX(), other.getOrigin().getY(), other.getName()), Square(other), side_b(other.side_b) {}

Rectangle &Rectangle::operator=(const Rectangle &other)
{
    if (this != &other)
    {
        Square::operator=(other);
        side_b = other.side_b;
    }
    return *this;
}