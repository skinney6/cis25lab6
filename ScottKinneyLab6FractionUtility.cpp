// FILE #  Stand-alone function definitions
/**
 * Program name: ScottKinneyLab6FractionUtility.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6FractionUtility.h"
using namespace std;

void init(FractionScottK *&fr1, FractionScottK *&fr2) {
    int n;
    int d;
    
    if (fr1) {
	cout << "Enter the numerator: ";
	cin >> n;
	cout << "Enter the denominator: ";
	cin >> d;
	fr1->update(n, d);

	cout << "Enter the numerator: ";
	cin >> n;
	cout << "Enter the denominator: ";
	cin >> d;
	fr2->update(n, d);

    } else {
	cout << "Enter the numerator: ";
	cin >> n;
	cout << "Enter the denominator: ";
	cin >> d;
	fr1 = new FractionScottK(n, d);

	cout << "Enter the numerator: ";
	cin >> n;
	cout << "Enter the denominator: ";
	cin >> d;
	fr2 = new FractionScottK(n, d);
    }
}

FractionScottK divide(const FractionScottK &fr1, 
		      const FractionScottK &fr2) {
    int nOne;
    int dOne;
    int nTwo;
    int dTwo;
    int gcf;

    nOne = fr1.getNum();
    dOne = fr1.getDenom();
    nTwo = fr2.getNum();
    dTwo = fr2.getDenom();
    
    //multiply one by reciprocal of two
    nOne *= dTwo;
    dOne *= nTwo;

    // see if we need to reduce
    if ((gcf = gcd(nOne, dOne)) != 0) {
	dOne /= gcf;
	nOne /= gcf;
    }
    return FractionScottK(nOne, dOne);    
}

FractionScottK multiply(const FractionScottK &fr1, 
			const FractionScottK &fr2) {
    int nOne;
    int dOne;
    int nTwo;
    int dTwo;
    int gcf;
    
    nOne = fr1.getNum();
    dOne = fr1.getDenom();
    nTwo = fr2.getNum();
    dTwo = fr2.getDenom();

    nOne *= nTwo;
    dOne *= dTwo;

    // see if we need to reduce
    if ((gcf = gcd(nOne, dOne)) != 0) {
	dOne /= gcf;
	nOne /= gcf;
    }

    return FractionScottK(nOne, dOne);
}

FractionScottK subtract(const FractionScottK &fr1, 
			const FractionScottK &fr2) {
    int n;
    int d;

    n = (fr1.getNum() * fr2.getDenom()) - (fr1.getDenom() * fr2.getNum());
    d = fr1.getDenom() * fr2.getDenom();

    return FractionScottK(n, d);
}

FractionScottK add(const FractionScottK &fr1, 
		   const FractionScottK &fr2) {
    int n;
    int d;

    n = (fr1.getNum() * fr2.getDenom()) + (fr1.getDenom() * fr2.getNum());
    d = fr1.getDenom() * fr2.getDenom();
    
    return FractionScottK(n, d);
}

int gcd(int n, int d) {
    if (d == 0) 
	return n;
    else
	return gcd(d, n % d);
}
