#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    void display(void)
    {
        cout << data << endl;
    }

    friend void exchange(X &, Y &);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    void display(void)
    {
        cout << num << endl;
    }

    friend void exchange(X &, Y &);
};

/* trick:
temp = a;
a = b;
b = temp;

*/
void exchange(X &x, Y &y)
{
    int temp = x.data;
    x.data = y.num;
    y.num = temp;
}

int main()
{

    X c1;
    Y c2;

    c1.setValue(45);
    c2.setValue(95);

    exchange(c1, c2);

    cout << "value of c1 after swapping is: ";
    c1.display();
    cout << "value of c2 after swapping is: ";
    c2.display();

    return 0;
}