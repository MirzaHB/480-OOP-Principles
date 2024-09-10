// ENSF 480 - Lab 1 - Exercise C
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
#include <vector>
#include "Address.h"
using namespace std;

class Customer
{
private:
    string name;
    Address address;
    int phone;
};
#endif