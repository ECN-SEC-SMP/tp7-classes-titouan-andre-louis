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

Cercle::Cercle(PointPlan &point, int a, int b)
{
    Forme(PointPlan &point, int a, int b);
}

int Cercle::getCercle()
{
    return getForme()
}
