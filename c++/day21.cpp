#include <iostream>
#include <random>
using namespace std;

int main(){

    int guess;
    int min = 1;
    int max = 10;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    int randomNumber = distrib(gen);

    do{
        cout << "Guess the number:";
        cin >> guess;

        if(guess == randomNumber){
            cout << "You won" << endl;
        }
        if(randomNumber > guess){
            cout << "Guess is too low" << endl;
        }else if(randomNumber < guess){
            cout << "Guess is too high" << endl;
        }
    }while(guess != randomNumber);

    return 0;
}