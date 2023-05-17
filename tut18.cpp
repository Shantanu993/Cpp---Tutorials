#include <iostream>

using namespace std;

int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }

    //     n! = n * (n-1)!
    return a * factorial(a - 1);
}

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{

    // Recursions and Recursive functions

    // factorial of a number:
    // ex. 4! = 4*3*2*1 = 24;
    //     0! = 1;
    //     n! = n * (n-1)!

    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;

    cout << "The fibonnaci sequence at position " << a << " is " << fib(a) << endl;

    return 0;
}