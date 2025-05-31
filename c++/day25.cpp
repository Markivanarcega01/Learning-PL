#include <iostream>

int main(){

    int num;
    int result=1;
    std::cout << "Enter number:";
    std::cin >> num;
    for(int i=num; i>0; i--){
        result *= i;

    }
    std::cout << result;
    return 0;
}