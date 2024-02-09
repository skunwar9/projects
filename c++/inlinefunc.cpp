#include<iostream>
using namespace std;

 int product(int a,int b) {
    //  static int c = 0; //this executes only once
    //  c = c + 1; //next time this function runs,the value of c will be retained
     return a * b ; //do not use inline with static, loops
}

float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}

// int strlen(const char *p){
    
// }

int main(){
    int a, b;
    int money = 100000;
    // cout << "Enter the value if a and b";
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b)<<endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    // cout << "The product of a and b is " << product(a, b) << endl;
    cout << "if you have " << money << " Rs in ur bank acc, you will receive " << moneyReceived(money) << "rs after 1 year"<<endl;
    cout << "if you have " << money << " Rs in ur bank acc, you will receive " << moneyReceived(money,1.1) << "rs after 1 year"<<endl;

    return 0;
}