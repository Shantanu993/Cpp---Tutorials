#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // Constants in C++,
    // used to avoid accidental changes in the value of a variable.

    // const int a = 3;
    // cout<<"The value of a: "<<a<<endl;

    /*
    int a = 3;
    You will get an error because a is a constant.
    cout<<"The value of a: "<<a<<endl; */

    // Manipulators in C++
    // used to format data displayed on the screen. Ex. endl

    // int b = 78, c = 45, d = 2343;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;
    // cout<<"The value of d without setw is: "<<d<<endl;

    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;
    // cout<<"The value of d is: "<<setw(4)<<d<<endl;

    // Operator Precedence
    // Refer to the precedence and associativity table.
    // It is not according to BODMAS rule.

    int c = ((((10 * 5) + 3) - 45) + 5);
    cout << c << endl;

    return 0;
}