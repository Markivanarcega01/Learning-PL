#include <iostream>
using namespace std;

class Account
{
    public:
    string username;
    string password;

public:
    bool userExists(string username, string password)
    {
        if (this->username == username && this->password == password)
        {
            cout << "You're now logged in" << endl;
            return true;
        }
        else
        {
            cout << "Username does not exists" << endl;
            return false;
        }
    };
};

int main()
{

    Account acc;
    string username;
    string password;

    acc.username = "ivan";
    acc.password = "markivan01";
    do{
        cout << "Username:";
        cin >> username;
        cout << "Password:";
        cin >> password;
    }while(!acc.userExists(username, password));

    return 0;
}