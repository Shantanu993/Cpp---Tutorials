#include <iostream>

using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

// Function Prototping: used when we write the function after main function
// type function-name (arguments)

int sum(int a, int b);
// int sum(int , int);  --> also acceptable

int main()
{

    // Functions and Function Prototyping.
    int num1 = 24;
    int num2 = 20;

    cout << "Sum is: " << sum(num1, num2); // num1 and num2 are parameters. (actual parameters)

    return 0;
}

int sum(int a, int b) // a and b are formal parameters.
{
    return a + b;
}