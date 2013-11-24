// FILE Rectangle Utility (Stand-alone function definitions)
/**
 * Program name: ScottKinneyLab6PointUtility.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab6Rectangle.h"
#include "ScottKinneyLab6RectangleUtility.h"
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
using namespace std;

FractionScottK compareArea(RectangleScottK& r1, RectangleScottK& r2){
    return FractionScottK(r1.getArea() - r2.getArea());
}

void rectangleInit(RectangleScottK*& rec1, RectangleScottK*& rec2) {
    PointScottK *ptLl;
    PointScottK *ptUr;

    cout << "Rectangle One\n";
    createTwoPoints(ptLl, ptUr);

    if (rec1)
	rec1->update(*ptLl, *ptUr);
    else
	rec1 = new RectangleScottK(*ptLl, *ptUr);	    

    delete ptLl;
    delete ptUr;
    
    cout << "Rectangle Two\n";
    createTwoPoints(ptLl, ptUr);

    if (rec2)
	rec2->update(*ptLl, *ptUr);
    else
	rec2 = new RectangleScottK(*ptLl, *ptUr);

    delete ptLl;
    delete ptUr;
}

void createTwoPoints(PointScottK*& ptLl, PointScottK*& ptUr) {
    int nX;
    int dX;
    int nY;
    int dY;

    // lower left x coordinate
    cout << "Lower left X coordinate:\n";
    cin >> nX >> dX;
    FractionScottK frXLl(nX, dX);

    // lower left y coordinate
    cout << "Lower left Y coordinate:\n";
    cin >> nY >> dY;
    FractionScottK frYLl(nY, dY);

    // create point lower left
    ptLl = new PointScottK(frXLl, frYLl);

    // upper right x coordinate
    // check that it's greater that lower left x
    FractionScottK frXUr;
    cout << "Upper right X coordinate:\n";
    cin >> nX >> dX;
    frXUr.update(nX, dX);

    while (frXUr < frXLl) {
	cout << "Cannot be less than lower left x coordinate " 
	     << "Upper right X coordinate:\n";
	cin >> nX >> dX;
	frXUr.update(nX, dX);
    }

    // upper rigth y cooridnate
    // check that it's greater that lower left y
    FractionScottK frYUr;
    cout << "Upper right Y coordinate:\n";
    cin >> nY >> dY;
    frYUr.update(nY, dY);
    
    while (frYUr < frYLl) {
	cout << "Cannot be less than lower left Y coordinate." 
	     << "Upper rigth Y coordinate:\n";
	cin >> nY >> dY;
	frYUr.update(nY, dY);
    }

    ptUr = new PointScottK(frXUr, frYUr);
}
