// FILE # Fraction Utility Header File
/**
 * Program name: ScottKinneyLab6FractionUtility.h
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#ifndef SCOTTKINNEYLAB6FRACTIONUTILITY_H
#define SCOTTKINNEYLAB6FRACTIONUTILITY_H

void init(FractionScottK*&, FractionScottK*&);

FractionScottK add(const FractionScottK&, const FractionScottK&);

FractionScottK subtract(const FractionScottK&, const FractionScottK&);

FractionScottK multiply(const FractionScottK&, const FractionScottK&);

FractionScottK divide(const FractionScottK&, const FractionScottK&);

void printScottKinney(const FractionScottK&, 
		      const FractionScottK&, const FractionScottK&);

void mainMenuScottKinney(void);
void headerScottKinney(void);
int gcd(int, int);

#endif
