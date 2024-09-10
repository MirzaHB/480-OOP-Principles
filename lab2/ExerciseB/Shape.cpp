// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Shape.cpp

#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(const double x, const double y, const char *name) : Origin(x, y)
{
    this->shapeName = new char[strlen(name) + 1];
    strcpy(this->shapeName, name);
}

Shape::~Shape()
{
    delete[] shapeName;
}

const Point &Shape::getOrigin() const
{
    return Origin;
}

const char *Shape::getName() const
{
    return shapeName;
}

void Shape::display() const
{
    cout << "Shape Name: " << shapeName << endl;
    Origin.display();
}
double Shape::distance(Shape &other)
{
    return Origin.distance(other.Origin);
}
double Shape::distance(Shape &the_shape, Shape &other)
{
    return Point::distance(the_shape.Origin, other.Origin);
}

void Shape::move(double dx, double dy)
{
    Origin.setx(Origin.getX() + dx);
    Origin.sety(Origin.getY() + dy);
}
Shape::Shape(const Shape &other) : Origin(other.Origin), shapeName(new char[strlen(other.shapeName) + 1])
{
    strcpy(shapeName, other.shapeName);
}
Shape &Shape::operator=(const Shape &other)
{
    if (this != &other)
    {
        delete[] shapeName;
        shapeName = new char[strlen(other.shapeName) + 1];
        strcpy(shapeName, other.shapeName);
        Origin = other.Origin;
    }
    return *this;
}
