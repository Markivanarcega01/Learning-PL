#include <iostream>
using namespace std;

int main(){

    string username = "admin";
    string password = "password";
    string loginUsername;
    string loginPassword;
    do{
        cout << "Username" << endl;
        cin >> loginUsername;
        cout << "Password" << endl;
        cin >> loginPassword;
    }while(username != loginUsername && password != loginPassword);
    return 0;
}