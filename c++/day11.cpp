#include <iostream>
using namespace std;

int main(){

    string username = "ivan";
    string password = "ivantoo";
    string usernameInput, usernamePassword;

    cout << "Enter your username" << endl;
    cin >> usernameInput;
    cout << "Enter your password" << endl;
    cin >> usernamePassword;

    if(username == usernameInput){
        if(password == usernamePassword){
            cout << "Welcome" << endl;
        }else{
            cout << "We know you, but your password is incorrect" << endl;
        }
    }else{
        cout << "Who are you" << endl;
    }

    return 0;
}