#ifndef __secsmp_type_def
#define __secsmp_type_def
#include <string>

class PointPlan {
private:
    int x, y;

public:
    void translater();
    InitPoint();
    Parametre(int a, int b);
    Recopier(Point const &point);

    // Accesseurs
    int getX();
    int getY();

    // Mutateurs
    void setX(x);
    void setY(y);
}


#endif