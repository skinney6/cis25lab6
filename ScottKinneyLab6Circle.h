// FILE Circle Class Specification File
/**
 * Program name: ScottKinneyLab6Circle.h
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB6CIRCLE_H
#define SCOTTKINNEYLAB6CIRCLE_H

#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6Point.h"

class CircleScottK {
private:
    PointScottK center;
    FractionScottK radius;  // no negative value allowed
public:
    CircleScottK();
    CircleScottK(PointScottK &, FractionScottK &);
    CircleScottK(const CircleScottK &);       
    ~CircleScottK();

    CircleScottK& operator=(const CircleScottK &);

    FractionScottK getR(void);
    void update(PointScottK &, FractionScottK &);
    
    friend ostream& operator<<(ostream &, const CircleScottK &);
    friend istream& operator>>(istream &, CircleScottK &);

};

#endif
