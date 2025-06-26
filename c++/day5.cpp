#include <iostream>
using namespace std;

int main(){
    int year = 2021;
    int &ref = year; // & is used to access memory address of variable
    int *ptr = &ref; // * is used to get the value pointed to by a pointer variable
    /*
    in short & returns memory address whilst * returns the value of the memory address mentioned
    */

    //int& var is different from &var
    /**
     * int a = 5;
     * int& ref = a; This is just an alias, ref is not actually a variable in the memory
     * 
     * whilst
     * int a = 5;
     * int *ptr = &a;
     * ptr holds the address of a
     */
    cout << year << endl;
    cout << &year << endl;
    cout << *&ref << endl;
    return 0;
}