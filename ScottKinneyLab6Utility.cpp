// FILE Utility (menus) Stand-alone function definitions
/**
 * Program name: ScottKinneyLab6Utility.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
#include <string>
#include <sstream>
#include "ScottKinneyLab6Rectangle.h"
#include "ScottKinneyLab6Circle.h"
#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6Utility.h"
#include "ScottKinneyLab6RectangleUtility.h"
#include "ScottKinneyLab6CircleUtility.h"
using namespace std;

void mainMenuScottKinney(void) {
int option;

    do {
	cout << "************************"
	     << "\n*     MAIN MENU        *"
	     << "\n* 1. Rectangle Tasks   *"
	     << "\n* 2. Circle Tasks      *"
	     << "\n* 3.point test        *"
	     << "\n* 4. Quit              *"
	     << "\n************************" << endl;
	cout << "Select an option (use iteger value only): ";
	cin >> option;

	switch (option) {
	case 1:
	    rectangleMenuScottKinney();
	    break;
	case 2:
	    circleMenuScottKinney();
	    break;
	case 3:
	    testPoint();
	    break;
	case 4:
	    break;

	default:
	    cout << "\nWrong Option. Use 1, 2 or 3\n";
	    cout << endl;
	}
    } while (option != 4);
}

void rectangleMenuScottKinney(void) {
    int option;
    RectangleScottK *recPt1 = NULL;
    RectangleScottK *recPt2 = NULL;
    FractionScottK fr;

    do {
	cout << "***********************************"
	     << "\n*    RECTANGLE MENU               *"
	     << "\n* 1. Create two Rectangle Objects *"
	     << "\n* 2. Compare by Volume            *"
	     << "\n* 3. Compare by Area              *"
	     << "\n* 4. Print two Rectangle Objects  *"
	     << "\n* 5. Quit                         *"
	     << "\n***********************************" << endl;
	cout << "Select an option (1 through 5): ";
	cin >> option;
	
	switch (option) {
	case 1:
	    rectangleInit(recPt1, recPt2);
	    break;
	case 2:
	    if (recPt1 != NULL) {
		cout << "\nTwo dimensional objects have no volume.\n" << endl;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 3:
	    if (recPt1 != NULL) {
		fr = compareArea(*recPt1, *recPt2);
		if (fr.getNum() < 0)
		    cout << "\nRectangle Two is larger in area\n\n";
		else if (fr.getNum() > 0)
		    cout << "\nRectangle One is larger in area\n\n";
		else if (fr.getNum() == 0)
		    cout << "\nThe rectangles have the same area\n\n";
		else
		    cout << "\n** Error **\n";
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 4:
	    if (recPt1 != NULL) {
		cout << "\nRectangle One: " << *recPt1 << 
		    "\nRectangle Two: " << *recPt2 << "\n\n";
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 5:
	    delete recPt1;
	    delete recPt2;
	    break;
	default:
	    cout << "\nWrong option ...\n" << endl;
	}
    } while (option != 5);
}

void circleMenuScottKinney(void) {
    int option;
    CircleScottK *cirPt1 = NULL;
    CircleScottK *cirPt2 = NULL;
    FractionScottK fr;

    do {
	cout << "********************************"
	     << "\n*    CIRCLE MENU               *"
	     << "\n* 1. Create two Circle Objects *"
	     << "\n* 2. Compate by Volume         *"
	     << "\n* 3. Compate by Area           *"
	     << "\n* 4. Print two Circle Objects  *"
	     << "\n* 5. Quit                      *"
	     << "\n********************************" << endl;
	cout << "Select an option (1 through 5): ";
	cin >> option;
	
	switch (option) {
	case 1:
	    circleInit(cirPt1, cirPt2);
	    cout << endl;
	    break;
	case 2:
	    if (cirPt1 != NULL) {
		cout << "\nTwo dimensional objects have no volume.\n\n";
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 3:
	    if (cirPt1 != NULL) {
		fr = compareCircleArea(*cirPt1, *cirPt2);
		if (fr.getNum() < 0)
		    cout << "\nCircle Two is larger in area\n\n";
		else if (fr.getNum() > 0)
		    cout << "\nCircle One is larger in area\n\n";
		else if (fr.getNum() == 0)
		    cout << "\nThe circles have the same area\n\n";
		else
		    cout << "\n** Error **\n";
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 4:
	    if (cirPt1 != NULL) {
		cout << "\nCircle One: " << *cirPt1 << 
		    "\nCircle Two: " << *cirPt2 << "\n\n";
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 5:
	    delete cirPt1;
	    delete cirPt2;
	    break;
	default:
	    cout << "\nWrong option ...\n";
	}
    } while (option != 5);
}

//create a fraction from string input

void createFraction(FractionScottK *&frPt) {
    string input;
    string::size_type pos = 0;
    string::size_type len = 0;
    int n;
    int d;

    cin >> input;
    len = input.length();
    pos = input.find("/");

    if (pos != string::npos) {
	string nStr = input.substr(0, pos);
	if (!(stringstream(nStr) >> n))
	    n = 0;
	string dStr = input.substr((pos + 1), (len - pos));
	if (!(stringstream(dStr) >> d))
	    d = 1;
    } else {
	if (!(stringstream(input) >> n))
	    n = 0;
	d = 1;
    }
    frPt = new FractionScottK(n, d);
}

void headerScottKinney(void) {
    cout << "\nCIS 25 - C++ Programming\n";
    cout << "Laney College\n";
    cout << "Scott Kinney\n\n";
    cout << "Assignment Information --\n";
    cout << "  Assignment Number: Lab 6\n";
    cout << "                     Exercise #1\n";
    cout << "  Written by:        Scott Kinney\n";
    cout << "  Due Date:          \n" << endl;
}

void errorInitScottKinney(void) {
    cout << "\nError: Fractions not initialized" << endl;
    cout << "  Run option 1.\n" << endl;
}

void testPoint(void) {
    FractionScottK fr1(2, 3);
    FractionScottK fr2(-4, 5);
    FractionScottK fr3(1, 1);
    FractionScottK fr4(2, 2);

    PointScottK p1(fr1, fr2);
    PointScottK p2(fr1, fr2);

    cout << "p2 "<< p2 << "\n";

    p2.flipByX();
    cout << p2 << "\n";

    p2.flipByY();
    cout << p2 << "\n";


    p2.flipThroughOrigin();
    cout << p2 << "\n";

}
