// Bibliothèques
#include "Point.h"
#include "Forme.h"
#include <string>
#include <iostream>

using namespace std;

// main
int main()
{
    PointPlan point2(8,6);
    // PointPlan point1(point2);    
    PointPlan point1(10,5);      
    // PointPlan point1();          
    Forme forme1(point1);
    Forme forme2(point2);

    // point1.setX(10);
    // point1.setY(5);

    //point1.translater(point2);
    //point1.translater(10,3);

    //point1 += point2;
    //cout << point1;

    forme1 += forme2;
    cout << forme1;

    // cout << point1.getX() << endl;
    // cout << point1.getY() << endl;

    return 0;
}