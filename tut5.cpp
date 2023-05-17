#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter num1: \n"; //  ' << ' is called the Insertion operator.
    cin >> num1;              // ' >> ' is called the Extraction operator.

    cout << "Enter num2: " << endl; // We can also use endl instead of "\n"
    //  ' << ' is called the Insertion operator.
    cin >> num2; // ' >> ' is called the Extraction operator.

    cout << "Sum of numbers is: " << num1 + num2;
    return 0;
}