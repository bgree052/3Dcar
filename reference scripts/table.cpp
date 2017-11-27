#include "table.h"

Table::Table()
{
    leg1.setParent(tableTop);
    leg2.setParent(tableTop);
    leg3.setParent(tableTop);
    leg4.setParent(tableTop);
    leg1.setPosition(-200, 100, 150);
    leg2.setPosition(200, 100, 150);
    leg3.setPosition(-200, 100, -150);
    leg4.setPosition(200, 100, -150);
    leg1.setHeight(200);
    leg2.setHeight(200);
    leg3.setHeight(200);
    leg4.setHeight(200);
    tableTop.setWidth(400);
    tableTop.setDepth(400);

}
void Table::setPosition(float x, float y, float z)
{
    tableTop.setPosition(x, y, z);
}
void Table::draw()
{
    tableTop.rotate(1, 0, 1, 0);

    leg1.draw();
    leg2.draw();
    leg3.draw();
    leg4.draw();
    tableTop.draw();

}
