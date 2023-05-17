#include <iostream>

using namespace std;

// This will not swap a and b.
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by reference using Pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ Reference variables

// void swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// return by reference
int &swapReferenceReturn(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{

    // Call by value and Call by reference.

    int x = 5, y = 3;

    cout << "value of x is " << x << " and value of y is " << y << endl;

    // swap(x,y);  // This will not swap a and b.

    // swapPointer(&x, &y);  // This will swap a and b using pointer reference.

    // swapReferenceVar(x, y); // This will swap a and b using reference variable.

    swapReferenceReturn(x, y) = 766; // this will change value of x as function return value(ie. a) is pointing x.

    cout << "value of x is " << x << " and value of y is " << y << endl;

    return 0;
}