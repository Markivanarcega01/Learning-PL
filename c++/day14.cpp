#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;

    if(!num1 || !num2){
        cout << "numbers are missing" << endl;
    }else if(num1 % 2 == 0 && num2 % 2 == 0){
        cout << "Both numbers are even";
    }

    return 0; 
}