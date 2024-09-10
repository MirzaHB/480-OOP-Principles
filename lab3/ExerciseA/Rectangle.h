// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Square.h"

class Rectangle : public Square
{
private:
    double side_b;

public:
    Rectangle(const double x, const double y,
              const double side_a, const double side_b, const char *name);
    double area() const;
    double perimeter() const;
    double get_side_b() const;
    double get_side_a() const;
    void set_side_a(double width);
    void set_side_b(const double length);
    void display() const;
    Rectangle(const Rectangle &other);
    Rectangle &operator=(const Rectangle &other);
};
#endif