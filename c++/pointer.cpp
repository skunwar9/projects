#include<iostream>
using namespace std;

int main(){
    //what is a pointer?-->data type which holds the address 
    //of other data type.

    int a = 3;
    int *b = &a;
    cout << b<<endl;

    // cout << &a;
    //  * ---> gives value at dereference operator
    //  & ---> address of operator
    cout << "value at address b is " << *b << endl;

//pointer to pointer
    
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The value at address c is " << *c << endl;
    return 0;
}

