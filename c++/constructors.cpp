#include<iostream>
#include "constructor.h"
using namespace std;
Car::Car(){
    std::cout << "constructor without argument";
}
Car::Car(int a)
{
    model = a;
}

Car::~Car()
{
    cout << "bye";
}
void Car::printData(){
    cout << model;
}
int main(){
    Car toyota(2);
    toyota.printData();
    return 0;
}