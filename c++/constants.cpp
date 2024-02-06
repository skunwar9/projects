#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a = 34;
    // cout << "The value of a was " << a << endl;
    // a = 45;
    // cout << "The value of a is " << a << endl;
    

    //constant
    // const int a = 3;
    // cout << "The value of a is " << a;



//manipulators
    // int a = 3, b = 78, c = 128;
    // cout << "The value of a is "<<setw(4)<< a << endl;
    // cout << "The value of b is " <<setw(4)<<b << endl;
    // cout << "The value of c is " <<setw(4)<<c << endl;


//operator precedence
    int a = 3, b = 4;
    int c = ((((a * 5) + b)-45)+87);
    cout << c;
    return 0;
}
