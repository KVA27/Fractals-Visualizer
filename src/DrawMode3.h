#pragma once
#include "FractalMode.h"

class DrawMode3 : public FractalMode
{
    private:
        bool active = false; 

    public:
        DrawMode3();
        void draw(int x, int y, int n,int r, int g, int b);
        void drawHelp(float x, float y, float size, int n,int r, int g, int bl); 
        void setActivate(bool state);
        bool getActivate();
};