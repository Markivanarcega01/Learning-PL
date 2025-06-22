#include <iostream>

int fibonacci(int range){
    if(range < 2){
        return range;
    }
    return fibonacci(range -1 ) + fibonacci(range -2);
}

int main(){
    int input;
    std::cin >> input;
    
    for(int i = 0; i < input; i++){
        std::cout << fibonacci(i) << ",";
    }
    
    return 0;
}