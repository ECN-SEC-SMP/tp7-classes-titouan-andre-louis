#ifndef __secsmp_point_h
#define __secsmp_point_h
#include <string>
#include <iostream>

using namespace std;

class PointPlan {
private:
    int x, y;

public:
    friend ostream& operator<<(ostream& aff, const PointPlan& p);
    void operator+=(PointPlan&);

    void translater(PointPlan p);
    void translater(int x, int y);

    // Constructeurs
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

ostream& operator<<(ostream& aff, const PointPlan& p);

#endif