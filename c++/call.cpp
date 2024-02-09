#include<iostream>
using namespace std;

int sum(int a,int b ){
    int c = a + b;
    return c;
}

//this wont swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

 void  swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    
}
// int &swapRefVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main(){
    int x = 4, y = 5;
    cout << "The sum is " << sum(4, 5) << endl;
    cout << "The value of x is " << x <<" and the value of y is " << y << endl;
    
    //call by reference using pointers
    // swapPointer(&x, &y); //this will swap a & b
    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // call by reference using pointers using c++ ref variance
    swapRefVar(x, y);
    //swapRefVar(x, y) = 766;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}