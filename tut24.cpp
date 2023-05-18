#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the employee id: ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is: " << id << " and employee number is " << count << endl;
    }

    // Static Member function: only have access to other static variables and static functions
    static void getCount(void)
    {
        // cout<<id; // throws an error as id is not static
        cout << "The value of count is " << count << endl;
    }
};

// count is the static data member of class employee
int Employee ::count = 1000; // default value is 0

int main()
{
    // Static data members and Methods
    Employee shanu, rohan, harry;
    // shanu.id = 1;
    // shanu.count = 1;  // cannot do this as id and count are private

    shanu.setData();
    shanu.getData();
    Employee ::getCount(); // calling static Member function

    rohan.setData();
    rohan.getData();
    Employee ::getCount(); // calling static Member function

    harry.setData();
    harry.getData();
    Employee ::getCount(); // calling static Member function

    return 0;
}