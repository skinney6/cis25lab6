// FILE Driver
/**
 * Program name: ScottKinneyLab6Driver.cpp
 * Discussion :  Lab 6 Exercise 1
 * Written by:   Scott Kinney
 * Date:         Tue Dec  3 10:34:25 PST 2013
 */
#include "ScottKinneyLab6Utility.h"

#ifndef LIB
#ifdef TEST

#include "ScottKinneyLab6Fraction.h"
#include "ScottKinneyLab6Point.h"
#include "ScottKinneyLab6Rectangle.h"
#include "ScottKinneyLab6Circle.h"

int main() {

    cout << "Testing\n";

    return 0;
}

#else

int main() {

    headerScottKinney();
    mainMenuScottKinney();

    return 0;
}

#endif
#endif

/* OUTPUT

CIS 25 - C++ Programming
Laney College
Scott Kinney

Assignment Information --
  Assignment Number: Lab 6
                     Exercise #1
  Written by:        Scott Kinney
  Due Date:          12/03/2013

************************
*     MAIN MENU        *
* 1. Rectangle Tasks   *
* 2. Circle Tasks      *
* 3. Quit              *
************************
Select an option (use iteger value only): 1
***********************************
*    RECTANGLE MENU               *
* 1. Create two Rectangle Objects *
* 2. Compare by Volume            *
* 3. Compare by Area              *
* 4. Print two Rectangle Objects  *
* 5. Quit                         *
***********************************
Select an option (1 through 5): 1
Rectangle one 
Lower left
x: 1/2
y: 1
Upper right
x: 4
y: 2
Rectangle two 
Lower left
x: -1
y: -2
Upper right
x: 2
y: -1
***********************************
*    RECTANGLE MENU               *
* 1. Create two Rectangle Objects *
* 2. Compare by Volume            *
* 3. Compare by Area              *
* 4. Print two Rectangle Objects  *
* 5. Quit                         *
***********************************
Select an option (1 through 5): 2

Two dimensional objects have no volume.

***********************************
*    RECTANGLE MENU               *
* 1. Create two Rectangle Objects *
* 2. Compare by Volume            *
* 3. Compare by Area              *
* 4. Print two Rectangle Objects  *
* 5. Quit                         *
***********************************
Select an option (1 through 5): 3

Rectangle One is larger in area

***********************************
*    RECTANGLE MENU               *
* 1. Create two Rectangle Objects *
* 2. Compare by Volume            *
* 3. Compare by Area              *
* 4. Print two Rectangle Objects  *
* 5. Quit                         *
***********************************
Select an option (1 through 5): 4

Rectangle One: Lower Left (1/2, 1/1) Upper Right (4/1, 2/1)
Rectangle Two: Lower Left (-1/1, -2/1) Upper Right (2/1, -1/1)

***********************************
*    RECTANGLE MENU               *
* 1. Create two Rectangle Objects *
* 2. Compare by Volume            *
* 3. Compare by Area              *
* 4. Print two Rectangle Objects  *
* 5. Quit                         *
***********************************
Select an option (1 through 5): 5
************************
*     MAIN MENU        *
* 1. Rectangle Tasks   *
* 2. Circle Tasks      *
* 3. Quit              *
************************
Select an option (use iteger value only): 2
********************************
*    CIRCLE MENU               *
* 1. Create two Circle Objects *
* 2. Compate by Volume         *
* 3. Compate by Area           *
* 4. Print two Circle Objects  *
* 5. Quit                      *
********************************
Select an option (1 through 5): 1
Circle one
Center point
x: 1/2
y: 2
Radius: 4
Circle two
Center point
x: -1
y: -1/2
Radius: 2

********************************
*    CIRCLE MENU               *
* 1. Create two Circle Objects *
* 2. Compate by Volume         *
* 3. Compate by Area           *
* 4. Print two Circle Objects  *
* 5. Quit                      *
********************************
Select an option (1 through 5): 2

Two dimensional objects have no volume.

********************************
*    CIRCLE MENU               *
* 1. Create two Circle Objects *
* 2. Compate by Volume         *
* 3. Compate by Area           *
* 4. Print two Circle Objects  *
* 5. Quit                      *
********************************
Select an option (1 through 5): 3

Circle One is larger in area

********************************
*    CIRCLE MENU               *
* 1. Create two Circle Objects *
* 2. Compate by Volume         *
* 3. Compate by Area           *
* 4. Print two Circle Objects  *
* 5. Quit                      *
********************************
Select an option (1 through 5): 4

Circle One: Center: (1/2, 2/1) Radius: 4/1
Circle Two: Center: (-1/1, -1/2) Radius: 2/1

********************************
*    CIRCLE MENU               *
* 1. Create two Circle Objects *
* 2. Compate by Volume         *
* 3. Compate by Area           *
* 4. Print two Circle Objects  *
* 5. Quit                      *
********************************
Select an option (1 through 5): 5
************************
*     MAIN MENU        *
* 1. Rectangle Tasks   *
* 2. Circle Tasks      *
* 3. Quit              *
************************
Select an option (use iteger value only): 3

 */
