#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item no : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with id" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    char count = 'y';
    while (count == 'y' || count == 'Y')
    {
        dukaan.setPrice();
        cout << "do you want to add another item? (y/n): ";
        cin >> count;
    }

    dukaan.displayPrice();

    return 0;
}