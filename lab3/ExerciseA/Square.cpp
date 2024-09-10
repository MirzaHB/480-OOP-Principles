// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Square.cpp

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square(const double x, const double y, double side_a, const char *name)
    : Shape(x, y, name), side_a(side_a) {}

double Square::area() const
{
    return side_a * side_a;
}

double Square::perimeter() const
{
    return side_a * 4;
}

double Square::getSide_a() const
{
    return side_a;
}

void Square::set_side_a(double side)
{
    side_a = side;
}

void Square::display() const
{
    Shape::display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "perimeter: " << perimeter() << endl;
}

Square::Square(const Square &other) : Shape(other), side_a(other.side_a) {}