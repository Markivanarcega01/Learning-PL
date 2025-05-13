#include <iostream>
using namespace std;

int add(int &num1, int &num2){
    num1 += 10;
    num2 = num1;
    return num1+num2;
}

int main(){
    int num1;
    int num2;
    char operation;
    cout << "Num1" << endl;
    cin >> num1;
    cout << "Num2" << endl;
    cin >> num2;
    cout << "Operation" << endl;
    cin >> operation;

    if(operation == '+'){
        cout << num1+num2 << endl;
    }else if(operation == '-'){
        cout << num1-num2 << endl;
    }
    /*
    int num1 = 10;
    int num2 = 20;
    int sum = add(num1,num2);
    cout << num1 << endl;
    cout << num2 << endl;
    cout << sum;
    return 0;
    */
}