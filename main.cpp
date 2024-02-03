#include <iostream>
#include <conio.h>
#include <windows.h> // Include the Windows header for Windows-specific functions
#include "sliding_cactus.cpp"

using namespace std;

// Function to clear the console screen on Windows
void clearScreen() {
    system("cls");
}

int main() {
    char key;
    int arrowKey;
    clearScreen();
    initFrame();
    draw();
    drawBox();
    drawCactus();
    bool gameOver = false;
    while (!gameOver) {
        while(!_kbhit())
        {
            moveBox(0, 1);
            moveCactus(-1, 0);
            if (checkCatusCollision())
                gameOver = true;
                break;
        }
        if (_kbhit()) {
            key = _getch();
            if (key == 0 || key==-32) {
                arrowKey = _getch();
                switch (arrowKey) {
                    case 72:
                        //cout << "UP";
                        moveBox(0, -3);
                        moveCactus(-1, 0);
                        break;
                }
            } else {
                //cout << "Key pressed: " << (int)key << endl;
                if (key == 'q') {
                    break;
                }
            }
        }
    }
    clearScreen();
    printGameOver();
    char ch;
    cin >> ch;
    return 0;
}