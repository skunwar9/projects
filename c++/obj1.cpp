#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(); // declaration of function
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData()
{
    a = 1;
    b = 2;
    c = 4;
}
int main()
{
    Employee harry;
    harry.d = 34;
    harry.e = 89;
    // harry.a = 40; this will throw error as a is pvt.
    harry.setData();
    harry.getData();
    return 0;
}