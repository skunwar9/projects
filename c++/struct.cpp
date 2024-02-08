#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money  //for better memory management
{
    int rice;
    char car;
    float pounds;
} ;

int main(){


    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal me1 = dinner;
    cout << (me1 == 2); //true
    // cout << breakfast;
    // cout << lunch;
    // cout << dinner;
    // //after using typedef, you can write ep instead of struct employee ...

    // ep Shristi;
    // struct employee Kunwar;
    // struct employee Aarju;
    // Shristi.eId = 1;
    // Shristi.favChar = 'c';
    // Shristi.salary = 1200;

    // cout << "The value  of salary is "<<Shristi.salary << endl;
    // cout << "The value of fav char is "<<Shristi.favChar << endl;
    // cout << "The value of  eID is "<<Shristi.eId << endl;

    return 0;
}