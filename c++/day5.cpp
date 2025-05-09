#include <iostream>
using namespace std;

int main(){
    int year = 2021;
    int &ref = year; // & is used to access memory address of variable
    int *ptr = &ref; // * is used to get the value pointed to by a pointer variable
    /*
    in short & returns memory address whilst * returns the value of the memory address mentioned
    */

    cout << year << endl;
    cout << &year << endl;
    cout << *&ref << endl;
    return 0;
}