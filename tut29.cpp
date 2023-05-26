#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor

    /* Constructor is a special member function with the same name as of the class.
    It is used to initialize the objects of its class.
    It is automatically invoked whenever and object is created.
    */
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    };
};

Complex ::Complex(void) // this is a default constructor as it takes no parameters
{
    a = 6;
    b = 10;
}

int main()
{

    // Constructors in C++

    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

// Properties of Constructors:

/*
1. it should be declared in the public section of the class.
2. they are automatically invoked whenever the object is created.
3. they cannot return values and do not have return types.
4. it can have default arguments.
5. we cannot refer to their address.
*/