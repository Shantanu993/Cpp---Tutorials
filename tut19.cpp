#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout << "using function with 2 arguments is " << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "using function with 3 arguments is " << endl;
    return a + b + c;
}

// Calculates volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Caluculates volume of cube
int volume(int a)
{
    return (a * a * a);
}

//  Calculates volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{

    // Function Overloading

    cout << "The sum of 3 and 6 " << sum(3, 6) << endl;
    cout << "The sum of 3, 6 and 7 " << sum(3, 6, 7) << endl;

    cout << "The volume of cuboid of dimensions 3, 6 and 7 is " << volume(3, 6, 7) << endl;
    cout << "The volume of cylinder of radius 3 and height 7 is " << volume(3, 7) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;

    return 0;
}