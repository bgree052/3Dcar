#ifndef TABLE_H
#define TABLE_H

#include "ofMain.h"

class Table
{
public:
    Table();
    void draw();
    void setPosition(float x, float y, float z);
private:
    ofBoxPrimitive leg1;
    ofBoxPrimitive leg2;
    ofBoxPrimitive leg3;
    ofBoxPrimitive leg4;
    ofBoxPrimitive tableTop;
};

#endif // TABLE_H
