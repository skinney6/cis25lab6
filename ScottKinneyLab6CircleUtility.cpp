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
#include "ScottKinneyLab6Utility.h"
using namespace std;

FractionScottK compareCircleArea(CircleScottK& c1, CircleScottK& c2){
    return FractionScottK(c1.getR() - c2.getR());
}

void circleInit(CircleScottK*& c1, CircleScottK*& c2) {
    PointScottK *center;
    FractionScottK radius;
    int n;
    int d;

    cout << "Circle one center point:\n";
    createCirclePoint(center);
    cout << "Radius: ";
    radius = createFraction();

    while (radius < 0) {
	cout << "Radius cannot be less than zero\nRadius: ";
	radius = createFraction();
    }
	
    if (c1)
	c1->update(*center, radius);
    else
	c1 = new CircleScottK(*center, radius);	    

    delete center;
    
    cout << "Circle two center point:\n";
    createCirclePoint(center);
    cout << "Radius: ";
    radius = createFraction();

    while (radius < 0) {
	cout << "Radius cannot be less than zero.\nRadius: ";
	radius = createFraction();
    }

    if (c2)
	c2->update(*center, radius);
    else
	c2 = new CircleScottK(*center, radius);

    delete center;
}

void createCirclePoint(PointScottK*& center) {

    // x coordinate
    cout << "x: ";
    FractionScottK frX = createFraction();

    // y coordinate
    cout << "y: ";
    FractionScottK frY = createFraction();

    // create point lower left
    center = new PointScottK(frX, frY);
}
