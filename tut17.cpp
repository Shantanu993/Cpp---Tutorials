#include <iostream>

using namespace std;

// use inline function when the function has very less code as inline function keeps the function at the place it is called at compile time. large function would occupy the cache memory.
inline int sum(int a, int b)
{
    // not recommended to use inline functions with static variables
    // static int c=0; // this executes only once
    // c = c+1; // next time this function is run, the value of c will be retained
    // return a + b + c;
    return a + b;
}

// Default arguments: write default arguments after other arguments

float moneyReceived(int moneynow, float factor = 1.04)
{
    return moneynow * factor;
}

// constant arguments: usually used for reference and pointer variables

// int strlen(const char *p){

// }

int main()
{

    // Inline Functions, Default Arguments, Constant Arguments

    // inline functions: it is a request to the compiler and it decides whether to make function inline or not

    int num1 = 24;
    int num2 = 20;

    cout << "Sum is: " << sum(num1, num2) << endl;

    // default arguments

    int money = 10000;
    cout << "money now " << money << ", money after 1 year " << moneyReceived(money) << endl; // if second argument is not given, program takes the default value of second argument given in the function

    cout << "money now " << money << ", money after 1 year for special case " << moneyReceived(money, 1.10) << endl;

    return 0;
}