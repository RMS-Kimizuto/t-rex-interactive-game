#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char key;
    int arrowKey;
    while (true) {
        
        if (_kbhit()) {
            key = _getch();
            if (key == 0) {
                arrowKey = _getch();
                cout << "Arrow key pressed: ";
                switch (arrowKey) {
                    case 72:
                        cout << "UP";
                        break;
                    case 80:
                        cout << "DOWN";
                        break;
                    case 75:
                        cout << "LEFT";
                        break;
                    case 77:
                        cout << "RIGHT";
                        break;
                    default:
                        cout << "Unknown";
                }
                cout << endl;
            } else {
                cout << "Key pressed: " << key << endl;
                if (key == 'q') {
                    break;
                }
            }
        }
    }
    return 0;
}