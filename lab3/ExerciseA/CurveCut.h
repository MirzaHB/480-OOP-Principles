// CurveCut.h by Hassan Baig UCID:30149393
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut : public Circle, public Rectangle
{
public:
    CurveCut(double x, double y, double length, double width, double rad, const char *name);
    double area() const;
    double perimeter() const;
    void display() const;
    CurveCut(const CurveCut &other);
    CurveCut &operator=(const CurveCut &other);
};
#endif