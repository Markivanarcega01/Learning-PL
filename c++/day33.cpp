#include <iostream>


int addAllTheNumbers(int num1, int num2){
    return num1+num2;
    }
int addAllTheNumbers(int num1, int num2, int num3){
    return num1+num2+num3;
}
double addAllTheNumbers(double num1, double num2){
    return num1+num2;
}

int main(){

    std::cout << addAllTheNumbers(2.5,6.7) << std::endl;
    
    return 0;
}