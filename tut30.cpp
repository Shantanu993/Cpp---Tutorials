#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    };
};

Complex ::Complex(int x, int y) // this is a parameterized constructor as it takes parameters
{
    a = 6;
    b = 10;
}

int main()
{

    // Parameterized and Default Constructor

    // Implicit Call
    Complex c1(5, 6);
    c1.printNumber();

    // Explicit Call
    Complex c2 = Complex(5, 6);
    c2.printNumber();

    return 0;
}