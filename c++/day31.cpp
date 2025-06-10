#include <iostream>

int Multiply(int num1, int num2){
    return num1*num2;
}


int main(){
    
    int result = Multiply(2,3);
    std::cout << result << std::endl;
    return 0;
}