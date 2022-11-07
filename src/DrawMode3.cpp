#include "DrawMode3.h"

DrawMode3::DrawMode3()
{
    this->active = active;
}

void DrawMode3::draw(int x, int y, int n,int r, int g, int b) 
{
    drawHelp((float) 300, 220, (float) y, n,r,g,b); 
}

void DrawMode3::drawHelp(float x, float y, float size, int n,int r, int g, int bl){
    if(n == 0) {
        return;
    }
    
    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));
    ofSetColor(r,g,bl);
    ofDrawTriangle(a, b, c);
    ofSetColor(255,255,255);

    drawHelp(x, y, size / 2, n - 1,r+n*30,g+n*40,bl-n*50); 
    drawHelp((a.x + b.x) /2, (a.y + b.y) / 2, size/ 2, n - 1,r-n*40,g-n*10,bl+n*50); 
    drawHelp((a.x + c.x) /2, (a.y + c.y) /2 , size/2, n - 1,r-n*40,g-n*10,bl+n*50);  
    
    
}

void DrawMode3::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode3::getActivate()
{
    return this->active;
}