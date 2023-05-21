#include <iostream>

using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;

    // Individually declaring functions as friends
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumCompComplex(complex, complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    // Friend Classes and Member Friend functions

    complex o1, o2;
    o1.setData(3, 5);
    o2.setData(2, 3);

    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int resc = calc.sumCompComplex(o1, o2);

    cout << "Sum of real part of complex numbers o1 and o2 is: " << res << endl;

    cout << "Sum of complex part of complex numbers o1 and o2 is: " << resc << endl;

    return 0;
}