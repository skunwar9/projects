#include<iostream>
using namespace std;
        //formal parameters
int sum(int a, int b); //prototype
void g(void);

int main()
{
    int num1, num2; //actual parameters
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is " << sum(num1, num2)<<endl;
    g();

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
   
    return c;

 
}

void g(){
    cout << "Hello, Good Morning";
}
