#include <iostream>

using namespace std;

int main()
{

    // Arrays

    int marks[4] = {23, 32, 45, 21};

    cout << marks[0] << endl;

    // you can reassign values.
    marks[1] = 50;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[3];
    mathMarks[0] = 28;
    mathMarks[1] = 21;
    mathMarks[2] = 29;

    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;

    // printing array using for loop

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    // ARRAYS AND POINTERS
    // address of array is it's name(address of first block) itself and not &name.      int* p = marks;
    // values of subsequent blocks can be found by Ex. for int data type: *(name), *(name+4), *(name+8),...

    // pointer arithmetic for address (not value at address):
    // new address(p + i) = current address(p) + i*sizeof(datatype)

    int *p = marks;
    cout << "Value at marks[0]" << *p << endl;
    cout << "Value at marks[1]" << *(p + 1) << endl;
    cout << "Value at marks[2]" << *(p + 2) << endl;

    return 0;
}