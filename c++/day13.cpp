#include <iostream>
using namespace std;

int main()
{   
    int num1, num2 = 0;

    cin >> num1;
    cin >> num2;

    if(num1 >= 10 && num2 >= 10){
        cout << "High" << endl;
    }else if(num1 >= 10 || num2 >= 10){
        cout << "One of them is higher" << endl;
    }

    if(num1 != 11){
        cout << "eww why not choose eleven" << endl;
    }

    return 0;
}