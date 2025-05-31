#include <iostream>
using namespace std;

void Log(string message);
int main(){
    int number = 0;
    Log("mark ivan");
    cout << "Enter a number:\n";
    cin >> number;
    cout << "You've enter number:" << number;
    return 0;
}