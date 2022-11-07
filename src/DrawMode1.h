#pragma once
#include "FractalMode.h"

class DrawMode1 : public FractalMode
{
    private:
        bool active = true; 
        
    public:
        DrawMode1();
        void draw(int x, int y, int n,int ro,int g,int b);
        void setActivate(bool state);
        bool getActivate();
};