#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    char gender;
    double weight;
    bool isRegistered;

    cout << "Profile maker" << endl;
    //Name, age, gender, weight, isRegistered, 
    cout << "Enter your name:";
    cin >> name;
    cout << endl;

    cout << "Enter your age:";
    cin >> age;
    cout << "\n";

    cout << "Enter your gender(M/F):";
    cin >> gender;
    cout << "\n";

    cout << "Enter your weight:";
    cin >> weight;
    cout << "\n";

    cout << "Are you registered:";
    cin >> isRegistered;
    cout << "\n";

    cout << "My name is " << name << "I'm " << age << endl
    << "My gender is " << gender << " Weight is " << weight << endl
    << "It is " << isRegistered << " that I am registered";

    return 0;
}