#include <string>
#include "Point.h"

void PointPlan::translater(int X, int Y) {
        x=x+X;
        y=y+Y;
    }

    InitPoint();
    Parametre(int a, int b);
    Recopier(Point const &point);

    // Accesseurs
    int getX();
    int getY();

    // Mutateurs
    void setX(x);
    void setY(y);

