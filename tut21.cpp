#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    // two ways to define function:

    void setData(int a1, int b1, int c1); // Declaration

    void printData()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
        cout << "Value of c is: " << c << endl;
        cout << "Value of d is: " << d << endl;
        cout << "Value of e is: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    // Classes, Public and Private modifiers

    Employee Shanu;
    Shanu.d = 24;
    Shanu.e = 12;
    // Shanu.a = 55; // Error as 'a' is private: cannot access or declare private here

    Shanu.setData(1, 2, 3);
    Shanu.printData();

    return 0;
}