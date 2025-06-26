#include <iostream>

double multiplyPI(int num){
    static double PI = 3.14;

    return num*PI;
}

int main(){

    std::cout << multiplyPI(2) << std::endl;

    return 0;
}