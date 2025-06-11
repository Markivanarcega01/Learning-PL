#include <iostream>
#include <string>

template <typename I>

bool isInputString(I input){
    std::string compare = "PKc";
    std::cout << typeid(input).name() << std::endl;
    return typeid(input).name() == compare;
}


int main(){

    bool result = isInputString("string");
    std::cout << result << std::endl;
    return 0;
}