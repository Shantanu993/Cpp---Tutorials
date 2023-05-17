#include <iostream>

using namespace std;

// struct Book
// {
//     int pages;
//     float cost;
//     string author;
// };

typedef struct Book
{
    int pages;
    float cost;
    string author;
} bk;

// UNION: similar to struct but with better memory management

union money
{
    // you can use only one of the given data. Hence memory is shared.
    int rupee;
    float pounds;
    char country;
};

int main()
{

    // STRUCTURES, UNIONS and ENUMS

    // Structures: unlike arrays, used to store multiple types of data types.

    // struct Book HarryPotter;
    bk HarryPotter;
    HarryPotter.author = "jk rowling";
    HarryPotter.cost = 35.5;

    cout << HarryPotter.author << endl;
    cout << HarryPotter.cost << endl;

    union money m;
    m.rupee = 100;
    cout << m.rupee << endl;
    m.pounds = 34.4;
    cout << m.pounds << endl;
    cout << "Garbage value of rupee will be printed as value to pounds has been assigned: " << m.rupee << endl;

    // ENUM: given integer value

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    Meal m1 = lunch;
    cout << m1;
    return 0;
}