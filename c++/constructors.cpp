#include <iostream>
#include "constructor.h"
using namespace std;
Car::Car() : model(3)
{
    std::cout << "constructor without argument" << endl;
}
Car::Car(int a)
{
    model = a;
}

Car::~Car()
{
    cout << "bye";
}
void Car::printData()
{
    cout << model;
}
int main()
{
    Car toyota(2);
    Car maruti;
    toyota.printData();
    maruti.printData();
    return 0;
}