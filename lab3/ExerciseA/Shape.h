// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Shape.h

#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape
{
protected:
    Point Origin;
    char *shapeName;

public:
    Shape(const double X, const double Y, const char *name);
    virtual ~Shape();
    const Point &getOrigin() const;
    const char *getName() const;
    virtual void display() const;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    double distance(Shape &other);
    static double distance(Shape &the_shape, Shape &other);
    void move(double dx, double dy);
    Shape(const Shape &other);
    Shape &operator=(const Shape &other);
};
#endif