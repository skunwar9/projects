#include<iostream>
// #include "name.h" //make sure the file is in current directory
using namespace std;

int main() {
    int a = 4, b = 5;
    cout << "Operators in c++:" << endl;
    cout << "\nFollowing are the operators in c++" << endl;
    cout << "\nThe value of a+b is " << a + b;
    cout << "\nThe value of a-b is " << a - b;
    cout << "\nThe value of a*b is " << a * b;
    cout << "\nThe value of a/b is " << a / b;
    cout << "\nThe value of a%b is " << a % b;
    cout << "\nThe value of a++ is " << a++;
    cout << "\nThe value of a-- is " << a--;
    cout << "\nThe value of ++a is " << ++a;
    cout << "\nThe value of --a is " << --a;

//comparison operators
    cout << "\n\nThe value of a==b is" << (a == b) << endl;
    cout << "The value of a!=b is" << (a != b) << endl;
    cout << "The value of a>=b is" << (a >= b) << endl;
    cout << "The value of a<=b is" << (a <= b) << endl;
    cout << "The value of a>b is" << (a > b) << endl;


//logical operators
    cout << "\n\nThe value of this is" << ((a == b) && (a < b));
    

    return 0;
}