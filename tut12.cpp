#include <iostream>

using namespace std;

int main()
{

    // POINTERS
    // A pointer is a variable that stores the address of another variable

    int a = 5;
    int *b = &a; // p is a pointer to an integer, and it is initialized to the address of a.

    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl;
    cout << "The value of a is: " << *b << endl;

    // Pointer to Pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;

    cout << "The value at address c is " << *c << endl;
    cout << "The address at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}