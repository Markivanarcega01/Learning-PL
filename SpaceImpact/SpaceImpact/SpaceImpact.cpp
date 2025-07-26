// SpaceImpact.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <chrono>
#include <thread>
#include <Windows.h>
bool gameOver;
const int mapWidth = 40;
const int mapHeight =20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection direction;

void Setup() {
    gameOver = false;
    direction = STOP;
    x = mapWidth / 2;
    y = mapHeight / 2;
    fruitX = rand() % mapWidth;
    fruitY = rand() % mapHeight;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < mapWidth+2; i++) {
        std::cout << "#";
    }
    std::cout << std::endl;

    for (int i = 0; i < mapHeight; i++)
    {
        for (int j = 0; j < mapWidth; j++) {
            if (j == 0) {
                std::cout << "#";
            }

            if (i == y && j== x) {
                std::cout << "O";
            }
            else if (i == fruitY && j == fruitX) {
                std::cout << "F";
            }
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    
                    if (tailX[k] == j && tailY[k] == i) {
                        std::cout << "o";
                        print = true;
                    }
                    
                }
                if (!print) {
                    std::cout << " ";
                }
            }
           
          
            if (j == mapWidth-1) {
                std::cout << "#";
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < mapWidth+2; i++) {
        std::cout << "#";
    }
    std::cout << std::endl;
    std::cout << "Score:" << score << std::endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                direction = LEFT;
                break;
            case 'd':
                direction = RIGHT;
                break;
            case 'w':
                direction = UP;
                break;
            case 's':
                direction = DOWN;
                break;
            case 'q':
                gameOver = true;
        }
    }
}

void Logic() {

    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (direction) {
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        default:
            break;
    }
    if (x > mapWidth || x < 0 || y > mapHeight || y < 0) {
        gameOver = true;
    }
    for (int i = 0; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y) {
            gameOver = true;
        }
    }
    if (x == fruitX && y == fruitY) {
        score += 1;
        fruitX = rand() % mapWidth;
        fruitY = rand() % mapHeight;
        nTail++;
    }
}


int main()
{
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(20);
        /*std::this_thread::sleep_for(std::chrono::milliseconds(100));*/
    }
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
