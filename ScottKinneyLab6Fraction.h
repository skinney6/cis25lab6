/* FILE Fraction Class Specification File
 *
 * Program name: ScottKinneyLab6Fraction.h
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#ifndef SCOTTKINNEYLAB6FRACTION_H
#define SCOTTKINNEYLAB6FRACTION_H

class FractionScottK {
    friend ostream& operator<<(ostream&, const FractionScottK&);
    friend istream& operator>>(istream&, FractionScottK&);
private:
    int num;
    int denom;
public:
    FractionScottK();
    FractionScottK(int, int);
    FractionScottK(const FractionScottK&);
    FractionScottK(int);
    ~FractionScottK();
    int getNum() const;
    int getDenom() const;
    void setNum(int);
    void setDenom(int);
    void update(const int, const int);
    FractionScottK operator+(const FractionScottK&) const;
    FractionScottK operator-(const FractionScottK&) const;
    FractionScottK operator*(const FractionScottK&) const;
    FractionScottK operator/(const FractionScottK&) const;
    FractionScottK& operator=(const FractionScottK&);
    FractionScottK& operator+=(const FractionScottK&);
    FractionScottK& operator-=(const FractionScottK&);
    FractionScottK& operator-(void);
    bool operator==(const FractionScottK&) const;
    bool operator!=(const FractionScottK&) const;
    bool operator<=(const FractionScottK&) const;
    bool operator<(const FractionScottK&) const;
    bool operator>=(const FractionScottK&) const;
    bool operator>(const FractionScottK&) const;
};
#endif
