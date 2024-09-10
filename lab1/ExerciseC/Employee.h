// ENSF 480 - Lab 1 - Exercise C
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <vector>
#include "Address.h"
using namespace std;

class Employee
{
private:
    string name;
    Address address;
    int DOB;
    string state;
};
#endif