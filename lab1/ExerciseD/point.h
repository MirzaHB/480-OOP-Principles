// ENSF 480 - Lab 1 - Exercise D
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: point.h
#include <cstring>
#include <iostream>
using namespace std;

#ifndef POINT_H
#define POINT_H
class Point
{
private:
    double x; // x coordinate of a location on Cartisian Plain
    double y; // y coordinate of a location on Cartisian Plain
public:
    Point(double a = 0, double b = 0); // Class Constructor

    double get_x() const; // returns the x coordinate
    double get_y() const; // returns the y coordinate
    void set_x(double a); // sets the x coordinate
    void set_y(double a); // sets the y coordinate
};

#endif