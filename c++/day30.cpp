#include <iostream>

int main(){

    int num1 = 10;
    const char* ptr = "Hello";
    int* ptr2 = &num1;
    int arr[] = {69,65,3,4,5};

    for(char letter : arr){
        if(letter){
            std::cout << typeid(letter).name() << std::endl;
        }
    }

    return 0;
}