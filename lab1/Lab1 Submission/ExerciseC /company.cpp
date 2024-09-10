#include <string>
#include <vector>
using namespace std;

struct Company
{
    string companyName;
    string companyAdderss;
    vector<string> employees; // vector of information about employees’ information
                              // (name, address, date of birth)

    string dateEstablished;       // the date that company was established
    vector<string> employeeState; // information about employees' current states
                                  //(active, suspended, retired, fired)
    vector<string> customers;     // vector of information about customers
                                  // (name, address, phone)
};