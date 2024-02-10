//oop - classes and objects
    // you can declare objects along with class declaration like this:
    /*
    class Employee{
        //class definition
    } harry, rohan, lovish;
    */
   //nesting of member functions


#include<iostream>
using namespace std;
class binary
{
private:   
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::read(void){
    cout << "Enter a binary num: ";
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length();i++)
    {
        if((s.at(i)!='0')&&(s.at(i)!='1')){
            cout << "Invalid binary format";
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin(); //
    for (int i = 0; i < s.length();i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
void binary::display(void){
    cout << "displaying binary number" << endl;
    for (int i = 0; i < s.length();i++)
    {
        cout << s.at(i);
    }
}

    int
    main()
{
    binary b;

    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}