#include "DrawMode2.h"

DrawMode2::DrawMode2()
{
    this->active = active;
}

void DrawMode2::draw(int x, int y, int n,int r, int g, int b) 
{
    drawHelp(200, n, x, y, 10,r,g,b);
    drawHelp(100, n, 190, 690, 5,r,g,b);
    drawHelp(100, n, 840, 690, 5,r,g,b); 
}

void DrawMode2::drawHelp(int length, int n, int x, int y, int d,int r, int g, int b) 
{
    if (n != 0)
    {
        ofSetColor(r,g,b);
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * d);
        int leftBranchY = middleY - length * sin(PI / 180 * d);
        int rightBranchX = x + length * cos(PI / 180 * d);
        int rightBranchY = middleY - length * sin(PI / 180 * d);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);
        drawHelp(length / 2, n - 1, rightBranchX, rightBranchY,30,r+n*10,g+n*20,b-n*30);
        drawHelp(length / 2, n - 1, middleX, middleY, 30,r+n*10,g+n*20,b-n*30);
        drawHelp(length / 2, n - 1, leftBranchX, leftBranchY, 30,r+n*10,g+n*20,b-n*30);
    }
}

void DrawMode2::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode2::getActivate()
{
    return this->active;
}