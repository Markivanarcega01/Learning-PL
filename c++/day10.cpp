#include <iostream>
using namespace std;

int main(){
    int order;
    cout << "Choose your order: 1.Burger, 2.Fries, 3.Hotdog" << endl;
    cin >> order;

    switch(order){

        case 1:
        cout << "Your order is Burger" << endl;
        break;

        case 2:
        cout << "Your order is Fries" << endl;
        break;

        case 3:
        cout << "Your order is Hotdog" << endl;
        break;

        default:
        cout << "No order" << endl;
        break;
    }

    return 0;
}