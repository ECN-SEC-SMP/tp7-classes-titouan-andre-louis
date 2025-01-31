// Bibliothèques
#include "Point.h"
#include <string>
#include <iostream>

using namespace std;

// main
int main() {
    PointPlan point1(10,5);

    cout << point1.getX() << endl;
    cout << point1.getY() << endl;
    
    return 0;
}