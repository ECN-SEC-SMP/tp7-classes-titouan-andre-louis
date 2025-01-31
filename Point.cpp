#include <string>
#include <iostream>
#include "Point.h"

ostream& operator<<(ostream& aff, const PointPlan& p) {
    aff << "Coordonnées : " << p.x << "," << p.y << endl;
    return aff;
}

void PointPlan::operator+=(PointPlan &p)
{
    x += p.x;
    y += p.y;
}

void PointPlan::translater(int X, int Y)
{
    this->x = x + X;
    this->y = y + Y;
}

void PointPlan::translater(PointPlan p)
{
    this->x = x + p.x;
    this->y = y + p.y;
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
    this->x = point.x;
    this->y = point.y;
}

int PointPlan::getX() { return x; };
int PointPlan::getY() { return y; };

void PointPlan::setX(int x) { this->x = x; };
void PointPlan::setY(int y) { this->y = y; };
