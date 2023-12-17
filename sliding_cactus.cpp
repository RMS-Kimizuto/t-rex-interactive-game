#include "frame.cpp"


const int CACTUS_W = 3;
const int CACTUS_H = 3;
char cactus[CACTUS_H][CACTUS_W] = 
{
    {BOX, SPACE, BOX},
    {BOX, BOX, BOX},
    {SPACE, BOX, SPACE},
};

int cactus_x = WIDTH - 5;
int cactus_y = HEIGHT - 4;

void drawCactus()
{
    for (int i=0; i<CACTUS_H; i++)
    for (int j=0; j<CACTUS_W; j++)
        drawOnFrame(cactus_x + j, cactus_y + i, cactus[i][j]);
}

void deleteCactus()
{
    for (int i=0; i<CACTUS_H; i++)
    for (int j=0; j<CACTUS_W; j++)
        drawOnFrame(cactus_x + j, cactus_y + i, SPACE);
}

void moveCactus(int dx, int dy)
{
    deleteCactus();
    cactus_x += dx;
    cactus_y += dy;
    //cactus_x = max(cactus_x, 1);
    //cactus_y = max(cactus_y, 1);
    cactus_x = min(cactus_x, WIDTH - 5);
    cactus_y = min(cactus_y, HEIGHT - 4);
    drawCactus();
}
