#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "using function w 2 arg" << endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout << "using function w 3 arg" << endl;
    return a + b + c;
}

double volume(double r, int h)
{
    return (3.14 * r * r * h);
}

double volume(int l, int b, int h)
{
    return (l * b * h);
}

double volume(int a)
{
    return (a * a * a);
}
int main()
{
    cout << "The sum of a and b is " << add(3, 6) << endl;
    cout << "The sum of a, b and c is " << add(3, 6, 4) << endl;
    cout << "The volume is " << volume(3, 4) << endl;
    cout << "The volume of cuboid is " << volume(3, 4, 5) << endl;
    cout << "The volume of cube is " << volume(3) << endl;
    return 0;
}