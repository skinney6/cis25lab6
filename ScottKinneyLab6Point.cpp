// FILE Point Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab6Point.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
//TODO add move and flip functionality
#include <iostream>
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
using namespace std;

void PointScottK::moveBy(FractionScottK delX, FractionScottK delY) {
    x += delX;
    y += delY;
}

bool PointScottK::operator==(const PointScottK& arg) const {
    if (x == arg.x && y == arg.y)
	return true;
    else 
	return false;
}
bool PointScottK::operator!=(const PointScottK& arg) const {
    return !(*this == arg);
}

FractionScottK PointScottK::getX(void) {
    return x;
}

FractionScottK PointScottK::getY(void) {
    return y;
}
ostream& operator<<(ostream& os, const PointScottK& point) {
    os << "\(" << point.x << ", " << point.y << ")";
    return os;
}

istream& operator>>(istream& is, PointScottK& point) {
    is >> point.x >> point.y;
    return is;
}

PointScottK::PointScottK() {
    // default constructor
}

PointScottK::PointScottK(FractionScottK& x, FractionScottK& y) 
    : x(x), y(y) {
}

PointScottK::PointScottK(const PointScottK& old) {
    //copy constructor
    x = old.x;
    y = old.y;
}

PointScottK::~PointScottK() {

}                 

PointScottK& PointScottK::operator=(const PointScottK& arg) {
    if (this != &arg) {  // no self-assignemnet
	x = arg.x;
	y = arg.y;
    }
    return *this;
}

void PointScottK::update(FractionScottK& argX, FractionScottK& argY) {
    x = argX;
    y = argY;
}
