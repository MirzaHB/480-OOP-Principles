// ENSF 480 - Lab 1 - Exercise D
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Human.cpp
#include <cstring>
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(const char *nam, double x, double y) : name(new char[strlen(nam) + 1])
{
    strcpy(this->name, nam);
    location.set_x(x);
    location.set_y(y);
}

const char *Human::get_name() const { return name; }

void Human::set_name(const char *name)
{
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Point Human::get_point() const { return location; }

void Human::display() const
{
    cout << "Human Name: " << name << "\nHuman Location: "
         << location.get_x() << " ,"
         << location.get_y() << ".\n"
         << endl;
}

Human::~Human()
{
    delete[] name;
}

Human::Human(const Human &other)
    : location(other.location), name(new char[strlen(other.name) + 1])
{
    strcpy(this->name, other.name);
}

Human &Human::operator=(const Human &other)
{
    if (this != &other)
    {
        delete[] this->name;
        this->name = new char[strlen(other.name) + 1];
        strcpy(this->name, other.name);
        this->location = other.location;
    }
    return *this;
}
