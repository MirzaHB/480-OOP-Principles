// ENSF 480 - Lab 1 - Exercise D
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Point.cpp
#include <cstring>
#include <iostream>
#include "point.h"
using namespace std;

Point::Point(double a, double b) : x(a), y(b){};
double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
void Point::set_x(double a) { x = a; };
void Point::set_y(double a) { y = a; };
