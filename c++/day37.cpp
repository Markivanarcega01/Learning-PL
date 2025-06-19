#include <iostream>

int factorial(int num){

    if(num > 0){
        return num * factorial(num-1);
    }else{
        return 1;
    }
}

int main(){

    int result = factorial(4);
    std::cout << result << std::endl;

    return 0;
}