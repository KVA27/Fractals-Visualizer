#include "FractalMode.h"

class DrawMode4 : public FractalMode{ 
    private:
        bool active = false;
         
    public:
        DrawMode4();
        void draw(int x, int y, int n,int r, int g, int b);
        void drawHelp(int x, int y, int z, int n,int r, int g, int b);
        void setActivate(bool state);
        bool getActivate();
};