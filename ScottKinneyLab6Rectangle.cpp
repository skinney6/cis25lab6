// FILE # Rectangle Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab6Rectangle.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6Rectangle.h"
using namespace std;

RectangleScottK& RectangleScottK::operator=(const RectangleScottK& arg) {
    if (this != &arg) {  // no self-assignemnet
	ll = arg.ll;
	ur = arg.ur;
    }
    return *this;
}

FractionScottK RectangleScottK::getArea(void) {
    return FractionScottK((ur.getX() - ll.getX()) * (ur.getY() - ll.getY()));
}

ostream& operator<<(ostream& os, const RectangleScottK& rect) {
    os << "Lower Left " << rect.ll << " Upper Rigth " << rect.ur;
    return os;
}

istream& operator>>(istream& is, RectangleScottK& rect) {
    is >> rect.ll >> rect.ur;
    return is;
}

RectangleScottK::RectangleScottK() {
    // default constructor
    cout << "Rectangle() called\n";
}

RectangleScottK::RectangleScottK(PointScottK& ll, PointScottK& ur) 
    : ll(ll), ur(ur) {
    cout << "Rectangle(Point, Point) : ll(ll), ur(ur); called \n";
}

RectangleScottK::RectangleScottK(const RectangleScottK& arg) {
    // copy constructor
    cout << "Rectangel(const Rectangle) called\n";

    ll = arg.ll;
    ur = arg.ur;
}

RectangleScottK::~RectangleScottK() {
    cout << "~Rectangle() called\n";
}

void RectangleScottK::update(PointScottK& argL, PointScottK& argR) {
    cout << "Rectangle update(Point, Point) called\n";
    ll = argL;
    ur = argR;
}
