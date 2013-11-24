// FILE Circle Implementation File (member function definitions)
/**
 * Program name: ScottKinneyLab6Circle.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab6Circle.h"
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Fraction.h"
using namespace std;

FractionScottK CircleScottK::getR(void) {
    return radius;
}

ostream& operator<<(ostream& os, const CircleScottK& circle) {
    os << "Center: " << circle.center << " Radius: " << circle.radius;
    return os;
}

istream& operator>>(istream& is, CircleScottK& circle) {
    is >> circle.center >> circle.radius;
    return is;
}

CircleScottK::CircleScottK() {
    // default constructor
}
CircleScottK::CircleScottK(PointScottK& c, FractionScottK& r) 
    : center(c), radius(r) {
}

CircleScottK::CircleScottK(const CircleScottK& old) {
    //copy constructor
    center = old.center;
    radius = old.radius;
}

CircleScottK::~CircleScottK() {

}                 

CircleScottK& CircleScottK::operator=(const CircleScottK& arg) {
    center = arg.center;
    radius = arg.radius;
    return *this;
}

void CircleScottK::update(PointScottK& c, FractionScottK& r) {
    center = c;
    radius = r;
}
