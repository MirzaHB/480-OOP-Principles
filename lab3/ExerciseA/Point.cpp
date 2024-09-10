// ENSF 480 - Lab 2 - Exercise A
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 11, 2023
// File Name: Point.cpp

#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int Point::idCounter = 1000;

Point::Point(double X, double Y) : x(X), y(Y) { id = ++idCounter; }

void Point::display() const
{
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

int Point::counter()
{
    return idCounter - 1000;
}

double Point::distance(const Point &obj) const
{
    return sqrt(pow(x - obj.x, 2) + pow(y - obj.y, 2));
}

double Point::distance(const Point &p1, const Point &p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int Point::getID()
{
    return id;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setx(double X)
{
    x = X;
}

void Point::sety(double Y)
{
    y = Y;
}