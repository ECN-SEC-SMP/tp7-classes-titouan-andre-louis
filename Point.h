#ifndef __secsmp_point_h
#define __secsmp_point_h
#include <string>

class PointPlan {
private:
    int x, y;

public:
    void translater(PointPlan p);
    void translater(int x, int y);

    PointPlan();
    PointPlan(int a, int b);
    PointPlan(PointPlan const &point);

    // Accesseurs
    int getX();
    int getY();

    // Mutateurs
    void setX(int x);
    void setY(int y);
};


#endif