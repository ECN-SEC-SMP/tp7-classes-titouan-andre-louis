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

int PointPlan::getX() { return x; };
int PointPlan::getY() { return y; };
