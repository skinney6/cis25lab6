// FILE Point Class Specification File
/**
 * Program name: ScottKinneyLab6Point.h
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB6POINT_H
#define SCOTTKINNEYLAB6POINT_H
#include "ScottKinneyLab6Fraction.h"

class PointScottK {
    friend ostream& operator<<(ostream&, const PointScottK&);
    friend istream& operator>>(istream&, PointScottK&);
private:
    FractionScottK x;
    FractionScottK y;
public:
    PointScottK();
    PointScottK(FractionScottK&, FractionScottK&);
    PointScottK(const PointScottK&);
    ~PointScottK();
    PointScottK& operator=(const PointScottK&);
    FractionScottK getX();
    FractionScottK getY();
    void moveBy(const FractionScottK&, const FractionScottK&);
    void moveBy(int);
    void flipByX();
    void flipByY();
    void flipThroughOrigin();
    void update(FractionScottK& argX, FractionScottK& argY);
    bool operator==(const PointScottK&) const;
    bool operator!=(const PointScottK&) const;
    bool operator<=(const PointScottK&) const;
    bool operator<(const PointScottK&) const;
    bool operator>=(const PointScottK&) const;
    bool operator>(const PointScottK&) const;

};

#endif
