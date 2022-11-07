#include "DrawMode4.h"

DrawMode4::DrawMode4(){
    this->active = active;
}

void DrawMode4::draw(int x, int y, int n,int r, int g, int b){
    drawHelp(x, y, 100, n, r, g, b);
}

void DrawMode4::drawHelp(int x, int y, int z, int n,int r, int g, int b){
    if(n!=0){
        if(n % 2 == 0){  
           ofFill();  
        }else{
            ofNoFill();
        }
        ofSetColor(r,g,b);
        ofDrawTriangle(x, y, z, 50, 50, n); 
        drawHelp(x+120, y, z, n-1,r+n*10,g+n*20,b-n*30); 
        drawHelp(x-80, y, z, n-1,r+n*10,g+n*20,b-n*30); 
        drawHelp(x, y+120, z, n-1,r+n*10,g+n*20,b-n*30);
        drawHelp(x, y-80, z, n-1,r+n*10,g+n*20,b-n*30);
    }
}

void DrawMode4::setActivate(bool state)
{
    this->active = state;
}

bool DrawMode4::getActivate()
{
    return this->active;
}