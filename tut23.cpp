#include <iostream>

using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of item with Id " << itemId[counter] << " is " << itemPrice[counter] << endl;
    }
}

int main()
{

    // Object memory allocation and using Arrays in classes

    shop household;
    household.initCounter();
    household.setPrice();
    household.setPrice();
    household.setPrice();
    household.displayPrice();

    return 0;
}