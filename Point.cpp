#include <string>
#include <iostream>
#include "Point.h"

void PointPlan::translater(int X, int Y)
{
    this->x = x + X;
    this->y = y + Y;
}

void PointPlan::translater(PointPlan p) {
    this->x = 0;
    this->y = 0;
}

PointPlan::PointPlan(int a, int b)
{
    this->x = a;
    this->y = b;
}

PointPlan::PointPlan()
{
    this->x = 0;
    this->y = 0;
}

PointPlan::PointPlan(PointPlan const &point)
{
    this->x = 0;
    this->y = 0;
}

int PointPlan::getX() { return x; };
int PointPlan::getY() { return y; };

void PointPlan::setX(int x) { this->x = x; };
void PointPlan::setY(int y) { this->y = y; };
