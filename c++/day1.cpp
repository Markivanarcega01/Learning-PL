#include <iostream>
using namespace std;

void Log(string message){
    message[0] = 'a';
    cout << message << endl;
}

// int main(){
//     cout << "Hello world";
// }