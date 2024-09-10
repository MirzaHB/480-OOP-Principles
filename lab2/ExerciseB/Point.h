// ENSF 480 - Lab 2 - Exercise B
// Completed by: Mirza Hassan Baig
// Submission Date: Oct 1, 2023
// File Name: Point.h

#ifndef POINT_H
#define POINT_H
class Point
{
private:
    double x;
    double y;
    int id;
    static int idCounter;

public:
    Point(double X, double Y);
    void display() const;
    static int counter();
    double distance(const Point &obj) const;
    static double distance(const Point &p1, const Point &p2);
    int getID();
    double getX() const;
    double getY() const;
    void setx(double X);
    void sety(double Y);
};
#endif