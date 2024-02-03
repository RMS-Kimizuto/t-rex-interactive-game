#include <iostream>

using namespace std;

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}

int min(int a, int b)
{
    if (a<b) return a;
    return b;
}

bool checkCollision(int x, int y, int x1, int y1, int w1, int h1){
    if (x >= x1 && x <= x1 + w1 && y >= y1 && y <= y1 + h1)
        return true;
    return false;
}

void printGameOver() {
    cout << "  ____    _    ____  _  __ __    ____   ___      _      __   __" << endl;
    cout << " / ___|  / \\  / ___|| |/ / /    \\ \\/ / /     / \\    | | | |" << endl;
    cout << "| |  _  / _ \\ \\___ \\| ' /       \\  /\\     / _ \\   | | | |" << endl;
    cout << "| |_| |/ ___ \\ ___) | .    \\       /  \\  \\   /_____\\  |_| | |" << endl;
    cout << " \\____/_/   \\_\\____/|_|\\_\\  /   / \\_\\ /_/     \\_\\_\\___/ " << endl;
}