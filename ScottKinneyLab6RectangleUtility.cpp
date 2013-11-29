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

FractionScottK compareArea(RectangleScottK& r1, RectangleScottK& r2){
    return FractionScottK(r1.getArea() - r2.getArea());
}

void rectangleInit(RectangleScottK *&rec1, RectangleScottK *&rec2) {
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

void createTwoPoints(PointScottK *&ptLl, PointScottK *&ptUr) {
    string input;
    string::size_type pos = 0;

    // lower left x coordinate
    cout << "Lower left\n\tx: ";
    
    FractionScottK frXll = createFraction();

    // lower left y coordinate
    cout << "Lower left\n\ty: ";
    FractionScottK frYll = createFraction();

    // create point lower left
    ptLl = new PointScottK(frXll, frYll);

    // upper right x coordinate
    // check that it's greater that lower left x
    cout << "upper rigth\n\tx: ";
    FractionScottK frXur = createFraction();

    while (frXur < frXll) {
	cout << "Cannot be less than lower left x coordinate.\n" 
	     << "\tx: ";
	frXur = createFraction();
    }

    // upper rigth y cooridnate
    // check that it's greater that lower left y
    cout << "upper rigth\n\ty: ";
    FractionScottK frYur = createFraction();;
    
    while (frYur < frYll) {
	cout << "Cannot be less than lower left Y coordinate.\n" 
	     << "\ty: ";
	frYur = createFraction();
    }

    ptUr = new PointScottK(frXur, frYur);
}

