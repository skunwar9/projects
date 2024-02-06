#include<iostream>
using namespace std;

int main(){
     int age;
    
        cout << "Tell me your age: ";
        cin >> age;
    //     if ((age < 18)&&(age>0))
    //     {
    //         cout << "you cannot enter!";
    // }
    // else if(age==18){
    //     cout << "okay we will let you enter:)";
    // }
    // else if(age<1){
    //     cout << "you're not born yet";
    // }
    // else{
    //     cout << "welcome!!";
    // }
    // ;

    //switch case

    switch (age)
    {
    case 18:
        cout << "you are 18";
        break;
    case 2:
        cout << "you are 2";
        break;
    default:
        cout << "No special case";
        break;
    }

    cout << "\ndone with switch case";

    return 0;
}