#pragma once
#include "ofMain.h" 

class FractalMode 
{
    public: 
        virtual void draw(int x, int y, int n,int r,int g,int b) = 0; 
        virtual void setActivate(bool) = 0;
        virtual bool getActivate() = 0;
};