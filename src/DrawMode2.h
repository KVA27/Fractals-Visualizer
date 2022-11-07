#pragma once
#include "FractalMode.h"

class DrawMode2 : public FractalMode
{
    private:
        bool active = false; 

    public:
        DrawMode2();
        void draw(int x, int y, int n,int r, int g, int b);
        void drawHelp(int length, int n, int x, int y, int d,int r, int g, int b); 
        void setActivate(bool state);
        bool getActivate();
};