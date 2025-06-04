#include <iostream>

int main(){

    const double pi = 3.14;
    double gravity = 9.8;

    double &modifiedGravity = gravity;
    modifiedGravity = 10;

    std::cout << &modifiedGravity << std::endl;
    std::cout << gravity;

    return 0;
}