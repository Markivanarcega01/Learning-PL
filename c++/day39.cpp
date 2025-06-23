#include <iostream>

int add(int num){
    return num+=1;
}

int addByReference(int &num){
    return num+=1;
}

int main(){
    int input;
    int input2;
    std::cin >> input;
    std::cin >> input2;
    add(input);
    addByReference(input2);
    std::cout << input << std::endl;
    std::cout << input2 << std::endl;

    return 0;
}