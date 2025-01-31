#include <string>
#include <iostream>
#include "Cercle.h"
#include "Cercle.h"

ostream& operator<<(ostream& aff, const Forme& f) {
    aff << "Coordonnées : " << f.centre << endl;
    return aff;
}

void Forme::operator+=(Forme &f)
{
    centre += f.centre;
}

Forme::Forme(PointPlan &point, int a, int b)
{
    PointPlan(a, b);
}

int Forme::getForme()
{
    return PointPlan::getX(), PointPlan::getY();
}
