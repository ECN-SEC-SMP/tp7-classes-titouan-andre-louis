// Bibliothèques
#include "Point.h"
#include <string>
#include <iostream>

using namespace std;

// main
int main()
{
    PointPlan point2(8,6);
    // PointPlan point1(point2);    // OK
    PointPlan point1(10,5);      // OK
    // PointPlan point1();          // OK

    point1.setX(10);
    point1.setY(5);

    point1.translater(point2);

    cout << point1.getX() << endl;
    cout << point1.getY() << endl;

    return 0;
}