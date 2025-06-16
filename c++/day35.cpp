#include <iostream>

double salaryCalculator(int gross, double tax = 0.3){
    return gross - gross*tax;
}

int main(){

    std::cout << "Your salary is:" << salaryCalculator(27000);

    return 0;
}