#include "DrawMode1.h"

DrawMode1::DrawMode1()
{
    this->active = active;
}

void DrawMode1::draw(int x, int y, int n,int ro,int g,int b)
{
    if(n!=0){
        ofSetColor(ro,g,b);
        int r = (pow(n,3))+(30*n);
        ofDrawIcoSphere(x, y, r);
        draw(x+r, y, n-1,ro+n*10,g+n*20,b-n*30); 
        draw(x-r, y, n-1,ro+n*10,g+n*20,b-n*30); 
        draw(x, y+r, n-1,ro+n*10,g+n*20,b-n*30); 
        draw(x, y-r, n-1,ro+n*10,g+n*20,b-n*30); 
    }
}

void DrawMode1::setActivate(bool state)
{
    this->active = state;
}


bool DrawMode1::getActivate()
{
    return this->active;
}