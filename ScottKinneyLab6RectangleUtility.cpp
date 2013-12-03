// FILE Rectangle Utility (Stand-alone function definitions)
/*
 * Program name: ScottKinneyLab6PointUtility.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include <string>
#include <sstream>
#include "ScottKinneyLab6Rectangle.h"
#include "ScottKinneyLab6RectangleUtility.h"
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6Utility.h"
using namespace std;

FractionScottK compareArea(RectangleScottK &r1, RectangleScottK &r2){
    return FractionScottK(r1.getArea() - r2.getArea());
}

void rectangleInit(RectangleScottK *&rec1, RectangleScottK *&rec2) {
    PointScottK *ptLl;
    PointScottK *ptUr;

    cout << "Rectangle one ";
    createTwoPoints(ptLl, ptUr);

    if (rec1)
	rec1->update(*ptLl, *ptUr);
    else
	rec1 = new RectangleScottK(*ptLl, *ptUr);	    

    delete ptLl;
    delete ptUr;
    
    cout << "Rectangle two ";
    createTwoPoints(ptLl, ptUr);

    if (rec2)
	rec2->update(*ptLl, *ptUr);
    else
	rec2 = new RectangleScottK(*ptLl, *ptUr);

    delete ptLl;
    delete ptUr;
}

void createTwoPoints(PointScottK *&ptLl, PointScottK *&ptUr) {
    string input;
    string::size_type pos = 0;

    // lower left x coordinate
    cout << "\nLower left\nx: ";
    FractionScottK *frXll = NULL;
    createFraction(frXll);

    // lower left y coordinate
    cout << "y: ";
    FractionScottK *frYll = NULL;
    createFraction(frYll);

    // create point lower left
    ptLl = new PointScottK(*frXll, *frYll);

    // upper right x coordinate
    // check that it's greater that lower left x
    cout << "Upper right\nx: ";
    FractionScottK *frXur = NULL;
    createFraction(frXur);

    while (*frXur < *frXll) {
	cout << "Cannot be less than lower left x coordinate.\n" 
	     << "x: ";
	createFraction(frXur);
    }

    // upper rigth y cooridnate
    // check that it's greater that lower left y
    cout << "y: ";
    FractionScottK *frYur = NULL;
    createFraction(frYur);
    
    while (*frYur < *frYll) {
	cout << "Cannot be less than lower left Y coordinate.\n" 
	     << "y: ";
	createFraction(frYur);
    }

    ptUr = new PointScottK(*frXur, *frYur);

    delete frXll;
    delete frYll;
    delete frXur;
    delete frYur;
}

