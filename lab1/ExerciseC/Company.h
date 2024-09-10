// ENSF 480 - Lab 1 - Exercise C
// Completed by: Mirza Hassan Baig
// Submission Date: Sept 17, 2023
// File Name: Company.h
#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <vector>
#include "Address.h"
#include "Employee.h"
#include "Customer.h"
using namespace std;
class Company
{
private:
    string name;
    int dateEstablished;
    Address address;
    vector<Employee> employees;
    vector<Customer> customers;
};
#endif