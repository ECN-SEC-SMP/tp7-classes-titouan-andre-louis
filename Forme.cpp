#include <string>
#include <iostream>
#include "Point.h"
#include "Forme.h"

ostream& operator<<(ostream& aff, const Forme& f) {
    aff << "Coordonnées : " << f.centre << endl;
    return aff;
}

void Forme::operator+=(Forme &f)
{
    centre += f.centre;
}

Forme::Forme(PointPlan &point)
{
    this->centre = point;
}

int Forme::getForme()
{
    return PointPlan::getX(), PointPlan::getY();
}
