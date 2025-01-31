#ifndef __secsmp_forme_h
#define __secsmp_forme_h
#include <string>
#include <iostream>
#include "Point.h"

using namespace std;

class Forme : public PointPlan {

private:
    PointPlan centre;
    
public:
    friend ostream& operator<<(ostream& aff, const Forme& f);
    void operator+=(Forme&);
    // Constructeurs
    Forme();
    Forme(PointPlan &point);

    // Accesseurs
    int getForme();

    // Mutateurs
};

ostream& operator<<(ostream& aff, const Forme& p);

#endif