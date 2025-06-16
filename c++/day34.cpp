#include <iostream>
 
std::string changeName(std::string &name, std::string newName){
    name = newName;
    return name;
}

void printPreviousNameAndNewName(std::string &prevName, std::string newName){
    std::cout << "Previos name:"+prevName << std::endl;
    std::cout << "New name:"+changeName(prevName, newName) << std::endl;
}

int main(){

    std::string originalName = "mark ivan arcega";
    std::string newName;
    std::cin >> newName;

    printPreviousNameAndNewName(originalName, newName);
    std::cout << originalName;


    return 0;
}