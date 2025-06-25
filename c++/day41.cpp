#include <iostream>

inline int add(int num1, int num2){
    return num1+num2;
}

int main(){

    int result = add(1,3);
    std::cout << result << std::endl;

    return 0;
}