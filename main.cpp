// Bibliothèques
#include "Point.h"
#include <string>
#include <iostream>

using namespace std;

// main
int main() {
    PointPlan point1();

    point1.setX(10);
    point1.setY(5);

    cout << point1.getX() << endl;
    cout << point1.getY() << endl;
    
    return 0;
}