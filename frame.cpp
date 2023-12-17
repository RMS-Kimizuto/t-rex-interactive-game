#include <iostream>
#include <windows.h>
#include "utils.cpp"

using namespace std;

const char BOX = 219;
const char BAR = '*';
const char SPACE = ' ';
 
const int WIDTH = 100;
const int HEIGHT = 20;
char frame[HEIGHT][WIDTH];

// Function to move the console cursor to position (x, y)
void moveCursorTo(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void initFrame() // init = initialize 
{
    for (int i=0; i<HEIGHT; i++)
    for (int j=0; j<WIDTH-1; j++)
        if (i==0 || j==0 || i==HEIGHT-1 || j == WIDTH - 2)
            frame[i][j] = BAR;
        else
            frame[i][j] = SPACE;
    for (int i=0; i<HEIGHT; i++)
        frame[i][WIDTH-1] = '\n';
} 


void draw()
{
    for (int i=0; i<HEIGHT; i++){
        for (int j=0; j<WIDTH-1; j++)
            cout << frame[i][j];
        cout << endl;
    }
}

int box_x = 1;
int box_y = HEIGHT - 2;

void drawBox()
{
    moveCursorTo(box_x, box_y);
    cout << BOX;
    moveCursorTo(0, 0);
}

void deleteBox()
{
    moveCursorTo(box_x, box_y);
    cout << SPACE;
    moveCursorTo(0, 0);
}

void moveBox(int dx, int dy)
{
    deleteBox();
    box_x = box_x + dx;
    box_y = box_y + dy;
    // check boundary
    box_x = max(box_x, 1);
    box_y = max(box_y, 1);
    box_x = min(box_x, WIDTH-3);
    box_y = min(box_y, HEIGHT-2);
    drawBox();
}

