#ifndef __secsmp_forme_h
#define __secsmp_forme_h
#include <string>
#include <iostream>
#include "Forme.h"

using namespace std;

class Cercle : public Forme {

private:
    Forme centre;
    int Rayon;
    
public:
    friend ostream& operator<<(ostream& aff, const Forme& f);
    void operator+=(Forme&);
    // Constructeurs
    Forme();
    Forme(PointPlan &point, int a, int b);

    // Accesseurs
    int getForme();

    // Mutateurs
};

ostream& operator<<(ostream& aff, const Forme& p);

#endif