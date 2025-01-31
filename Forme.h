#ifndef __secsmp_forme_h
#define __secsmp_forme_h
#include <string>
#include <iostream>

using namespace std;

class Forme : public PointPlan {
private:
    PointPlan centre;


public:
    // Constructeurs
    Forme();
    Forme(PointPlan const &point);

    // Accesseurs
    int getForme();

    // Mutateurs
    void setForme(int centre);
};

#endif