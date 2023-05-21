#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the employee id: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is: " << id << endl;
    }
};

int main()
{

    // Array of Objects and passing Objects as function arguments

    // Employee Shanu, Rohan, Arav, Harry;
    // Shanu.setId();
    // Shanu.getId();

    Employee fb[4]; // Array of Objects
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}