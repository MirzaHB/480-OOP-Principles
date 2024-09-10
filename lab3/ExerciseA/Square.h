// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Square.h

#include "Shape.h"
#ifndef SQUARE_H
#define SQUARE_H
class Square : virtual public Shape
{
protected:
    double side_a;

public:
    Square(const double x, const double y, const double side_a, const char *name);
    double area() const;
    double perimeter() const;
    double getSide_a() const;
    void set_side_a(double side);
    void display() const;
    Square(const Square &other);
};
#endif