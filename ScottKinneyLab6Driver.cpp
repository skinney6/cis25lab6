// FILE Driver
/**
 * Program name: ScottKinneyLab6Driver.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab6Utility.h"
#include "ScottKinneyLab6Fraction.h"

//#define TEST
#ifdef TEST
#include <string>
#include <sstream>

int main(int argc, char *argv[]) {
    string input;
    string::size_type pos = 0;
    string::size_type len = 0;
    int num;
    int denom;

    cout << "\tTesting\n";
    cout << "Enter a fraction: ";
    cin >> input;

    len = input.length();
    pos = input.find("/");

    if (pos != string::npos) {

	string numStr = input.substr(0, pos);
	if (!(stringstream(numStr) >> num))
	    num = 0;

	string denomStr = input.substr((pos + 1), (len - pos));
	if (!(stringstream(denomStr) >> denom))
	    denom = 1;

	cout << num << ' ' << denom << endl;

    } else {
	if (!(stringstream(input) >> num))
	    num = 0;
	denom = 1;
	cout << num << ' ' << denom << endl;
    }


    return 0;
}

#else

int main(int argc, char *argv[]) {

    headerScottKinney();
    mainMenuScottKinney();

    return 0;
}
#endif
