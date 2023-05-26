#include <iostream>

using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(1, 2);
    p1.displayPoint();

    Point p2(7, 3);
    p2.displayPoint();

    return 0;
}

// Exercise:
// Create a function (Hint: Make it a friend function) which takes two point objects and computes the distance between those two points.