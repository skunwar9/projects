#include<iostream>
using namespace std;

int main(){
    int age;
    
        cout << "Tell me your age: ";
        cin >> age;
        if (age < 18)
        {
            cout << "you cannot enter!";
    }
    else if(age==18){
        cout << "okay we will let you enter:)";
    }
    else{
        cout << "welcome!!";
    }
    ;
    return 0;
}