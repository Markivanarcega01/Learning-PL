#include <iostream>
#include <cstdlib>
#include <format>

using namespace std;

int main(){
    srand(time(0));
    int randomNumber1 = rand() % 101;
    int randomNumber2 = rand() % 101;
    int randomNumber3 = rand() % 101;
    int guess1;
    int guess2;
    int guess3;

    do{
        cout << "Guess the 1st number:";
        cin >> guess1; 
        //cout << randomNumber << endl;
        if(guess1 > randomNumber1){
            cout << "Guess is HIGH" << endl;
        }else if(guess1 < randomNumber1){
            cout << "Guess is LOW" << endl;
        }
    }while(guess1 != randomNumber1);
    cout << "********************************************" << endl;
    for(int i = 4; i >= 0; i--){
        cout << "Guess the 2nd number:";
        cin >> guess2;
        if(randomNumber2 == guess2){
            break;
        }else if(randomNumber2 > guess2){
            cout << "Guess is LOW" << endl;
        }else if(randomNumber2 < guess2){
            cout << "Guess is HIGH" << endl;
        }
        cout << i << " remaining" << endl;
        if(i == 0){
            cout << "You lose:" << randomNumber2 << endl;
            return 0;
        }
    }
    cout << "***********************************************" << endl;

    int j = 4;
    while(j >= 0){
        cout << "Guess the 3rd number:";
        cin >> guess3;

        if(randomNumber3 == guess3){
            cout << "You won" << endl;
            break;
        }else if(randomNumber3 < guess3){
            cout << "Guess is HIGH" << endl;
        }else if(randomNumber3 > guess3){
            cout << "Guess is LOW" << endl;
        }
        cout << j << " remaining" << endl;
        if(j == 0){
            cout << "You lose:" << randomNumber3 << endl;
            return 0;
        }
        j--;
    }

    return 0;
}