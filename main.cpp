#include <iostream>
#include <conio.h>
#include <windows.h> // Include the Windows header for Windows-specific functions
#include "frame.cpp"

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
    while (true) {
        if (_kbhit()) {
            key = _getch();
            if (key == 0 || key==-32) {
                arrowKey = _getch();
                //cout << "Arrow key pressed: ";
                switch (arrowKey) {
                    case 72:
                        //cout << "UP";
                        moveBox(0, -1);
                        break;
                    case 80:
                        //cout << "DOWN";
                        moveBox(0, 1);
                        break;
                    case 75:
                        moveBox(-1, 0);
                        //cout << "LEFT";
                        break;
                    case 77:
                        moveBox(1, 0);
                        //cout << "RIGHT";
                        break;
                    default:
                        //cout << "Unknown";
                        break;
                }
                //cout << endl;
            } else {
                //cout << "Key pressed: " << (int)key << endl;
                if (key == 'q') {
                    break;
                }
            }
        }
    }
    return 0;
}