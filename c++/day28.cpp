#include <iostream>

int main(){

    const int num = 2; // Cannot change the value
    const int *num2 = new int;
    //same with int const *num2 = new int;
    /**
     * *num2 = 2; Changing the actual value is forbidden
        num2 = (int*) &num; But changing the address is possible.
     *  
     * */ 
    
    int* const num3 = new int;

    /*
    *num3 = 3; Change the actual value is possible
    num3 = (int*) &num; Changeing the address is forbidden
    */

    const int* const num4 = new int;
    /*
        *num4 and num4 is both forbidden to change.
    */

    const double pi = 3.14;
    double gravity = 9.8;

    double &modifiedGravity = gravity;
    modifiedGravity = 10;

    std::cout << modifiedGravity << std::endl;
    std::cout << gravity;

    return 0;
}