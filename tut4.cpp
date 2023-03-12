#include <iostream>

using namespace std;

// global variable
int glob = 9;

int main()
{
    int glob = 33; // local variable
    // int a = 2;
    // int b = 6;
    int a = 2, b = 6;

    cout << "Value of a is " << a << " and value of b is " << b << "\n"; //  \n is escape sequence and is a new line character

    cout << glob << "\n"; // local variable will take precedence.

    bool is_true = true;
    cout << is_true << " (1 represents true)";

    const float PI = 3.14;
    cout << "The value of PI is " << PI << endl;
    // PI = 3.00; // error, since changing a const variable is not allowed.

    float c = 3.155;
    char add = 'e';
    cout << "\n"
         << c << "\n"
         << add;

    return 0;
}