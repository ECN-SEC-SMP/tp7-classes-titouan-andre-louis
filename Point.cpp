#include <string>
#include <iostream>
#include "Point.h"

void PointPlan::translater(int X, int Y) {
    x=x+X;
    y=y+Y;
}

PointPlan::PointPlan(int a, int b)
{
    this->x = x;
    this->y = y;
}

PointPlan::PointPlan()
{
    this->x = 0;
    this->y = 0;
}

int PointPlan::getX() { return x; };
int PointPlan::getY() { return y; };

void PointPlan::setX(int x) { this->x = x; };
void PointPlan::setY(int y) { this->y = y; };
