#include <string>
#include <iostream>
#include "Point.h"
#include "Forme.h"

PointPlan::PointPlan()
{
    this->x = 0;
    this->y = 0;
}

Forme::Forme(PointPlan const &point)
{
}

int Forme::getForme()
{
    return centre;
}

void Forme::setForme(int centre)
{
    this->centre = centre;
}
