#include <iostream>

int main(){

    int num = 1;

    if(num == 1){
        int num2 = 2;
        std::cout << num2 << std::endl;
    }

    //std::cout << num2 << std::endl; Num2 is out of scope

    return 0;
}