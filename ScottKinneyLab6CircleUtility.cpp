// FILE #  Circle Utility (Stand-alone function definitions)
/**
 * Program name: ScottKinneyLab6CircleUtility.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab6Circle.h"
#include "ScottKinneyLab6CircleUtility.h"
#include "ScottKinneyLab6Rectangle.h"
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
using namespace std;

FractionScottK compareCircleArea(CircleScottK& c1, CircleScottK& c2){
    return FractionScottK(c1.getR() - c2.getR());
}

void circleInit(CircleScottK*& c1, CircleScottK*& c2) {
    PointScottK *center;
    FractionScottK radius;
    int n;
    int d;

    cout << "Circle One\nCenter: ";
    createCirclePoint(center);
    cout << "Enter Radius:\n";
    cin >> n >> d;
    radius.update(n, d);

    while (radius < 0) {
	cout << "Radius cannot be less than zero\nEnter Radius:\n";
	cin >> n >> d;
	radius.update(n, d);
    }
	
    if (c1)
	c1->update(*center, radius);
    else
	c1 = new CircleScottK(*center, radius);	    

    delete center;
    
    cout << "Circle Two\n";
    createCirclePoint(center);
    cout << "Enter Radius:\n";
    cin >> n >> d;
    radius.update(n, d);

    while (radius < 0) {
	cout << "Radius cannot be less than zero\nEnter Radius:\n";
	cin >> n >> d;
	radius.update(n, d);
    }

    if (c2)
	c2->update(*center, radius);
    else
	c2 = new CircleScottK(*center, radius);

    delete center;
}

void createCirclePoint(PointScottK*& center) {
    int nX;
    int dX;
    int nY;
    int dY;

    // x coordinate
    cout << "X coordinate:\n";
    cin >> nX >> dX;
    FractionScottK frX(nX, dX);

    // y coordinate
    cout << "Y coordinate:\n";
    cin >> nY >> dY;
    FractionScottK frY(nY, dY);

    // create point lower left
    center = new PointScottK(frX, frY);
}
