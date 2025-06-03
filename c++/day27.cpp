#include <iostream>

int Multiply(int num1, int num2){
    //num1 and num2 variables are only accessible in this function
    return num1 * num2;
}

int main(){
    int input1;
    int input2;

    std::cout << "Enter two numbers to multiply:" << std::endl;
    std::cin >> input1; 
    std::cin >> input2;

    int result = Multiply(5,6);

    std::cout << result;

    return 0;
}