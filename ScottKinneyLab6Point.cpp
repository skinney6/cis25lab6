// FILE Point Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab6Point.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
//TODO add flip functionality
#include <iostream>
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
using namespace std;

void PointScottK::flipByX(void) {
    x = -x;
}

void PointScottK::flipByY(void) {
    y = -y;
}

void PointScottK::flipThroughOrigin(void) {
    x = -x;
    y = -y;
}


void PointScottK::moveBy(const FractionScottK &delX, 
			 const FractionScottK &delY) {
    x += delX;
    y += delY;
}

void PointScottK::moveBy(int n) {
    x += FractionScottK(n);
    y += FractionScottK(n);
}

bool PointScottK::operator==(const PointScottK &arg) const {
    if (x == arg.x && y == arg.y)
	return true;
    else 
	return false;
}

bool PointScottK::operator!=(const PointScottK &arg) const {
    return !(*this == arg);
}

FractionScottK PointScottK::getX(void) {
    return x;
}

FractionScottK PointScottK::getY(void) {
    return y;
}

ostream& operator<<(ostream &os, const PointScottK &point) {
    os << "\(" << point.x << ", " << point.y << ")";
    return os;
}

istream& operator>>(istream &is, PointScottK &point) {
    is >> point.x >> point.y;
    return is;
}

PointScottK::PointScottK() {
    cout << "Point() called\n";
    // default constructor
}

PointScottK::PointScottK(FractionScottK &x, FractionScottK &y) 
    : x(x), y(y) {
    cout << "Point(Fraction&, Fraction&) : x(x), y(y); called\n";
}

PointScottK::PointScottK(const PointScottK &old) {
    //copy constructor
    cout << "Point(const Point&) called\n";
    x = old.x;
    y = old.y;
}

PointScottK::~PointScottK() {
    cout << "~Point() called\n";
}                 

PointScottK& PointScottK::operator=(const PointScottK &arg) {
    if (this != &arg) {  // no self-assignemnet
	x = arg.x;
	y = arg.y;
    }
    return *this;
}

void PointScottK::update(FractionScottK &argX, FractionScottK &argY) {
    x = argX;
    y = argY;
}
