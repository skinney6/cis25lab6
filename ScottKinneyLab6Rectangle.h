// FILE # Rectangle Class Specification File
/**
 * Program name: ScottKinneyLab6Rectangle.h
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB6RECTANGLE_H
#define SCOTTKINNEYLAB6RECTANGLE_H
#include "ScottKinneyLab6Point.h"

class RectangleScottK {
private:
    PointScottK ll;
    PointScottK ur;
public:
    RectangleScottK();                         /* default constr */
    RectangleScottK(PointScottK &, PointScottK &); /* constructor*/
    RectangleScottK(const RectangleScottK &);        /* copy constr    */
    ~RectangleScottK();                          /* destructor    */

    RectangleScottK& operator=(const RectangleScottK &);
    
    void update(PointScottK &, PointScottK &);

    FractionScottK getArea(void);

    // insertion operator "cout"
    friend ostream& operator<<(ostream &, const RectangleScottK &);

    // extraction operator "cin"
    friend istream& operator>>(istream &, RectangleScottK &);

    bool operator==(const RectangleScottK &) const;
    bool operator!=(const RectangleScottK &) const;
    bool operator<=(const RectangleScottK &) const;
    bool operator<(const RectangleScottK &) const;
    bool operator>=(const RectangleScottK &) const;
    bool operator>(const RectangleScottK &) const;

};

#endif
