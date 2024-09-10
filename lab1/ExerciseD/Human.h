// ENSF 480 - Lab 1 - Exercise D
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Human.h
#include <cstring>
#include <iostream>
#include "point.h"
using namespace std;

#ifndef HUMAN_H
#define HUMAN_H

class Human
{
private:
    Point location; // Location of an object of Human on a Cartisian Plain
    char *name;     // Human's name
public:
    Human(const char *nam = "", double x = 0, double y = 0);
    const char *get_name() const;
    void set_name(const char *name);
    Point get_point() const;
    // void set_point(); maybe just maybe
    void display() const;
    ~Human();
    Human(const Human &other);
    Human &operator=(const Human &other);
};

#endif