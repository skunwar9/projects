#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[48];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    marks[2] = 455;
    cout << "THESE ARE MARKS" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    // you can change the value of an array

    cout << marks[2] << endl;
    cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout <<"The value of marks " <<i<<" is "<< marks[i]<<endl;
    }

    // do the same using while and do-while loops
    //  int i=0;
    //     while (i < 4)
    //     {
    //         cout << "The value of marks " << i << " is " << marks[i] << endl;
    //         i++;
    // }

    // do
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // } while (i<4);

    // pointers and Arrays
    /*
    pointer arithmetic
    ---> imp. address (new)=address (current) + i*sizeof(datatype)

    */

    int *p = marks;
    cout << *(p++)<<endl;
    cout << *(++p)<<endl;
   
    cout << "The value of *p is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;
    return 0;
}
