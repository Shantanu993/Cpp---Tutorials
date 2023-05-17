#include <iostream>

using namespace std;

int c = 20;
int main()
{
    /* code */
    int c = 10;
    cout << "Local c is " << c << endl;
    cout << "Global c is " << ::c << endl; //  '::' is the scope resolution operator(to print global value).

    // by default, type of decimal numbers is double. use eg. 34.4f to specify that it is a float.

    // **************Reference Variables**************

    // Shantanu ----> Shanu ----> abbotts

    float x = 444;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

    // **************Typecasting**************

    float b = 34.34;
    float &a = b;
    cout << "the value of b is" << (int)a << endl; // OR
    cout << "the value of b is" << int(a);

    return 0;
}
