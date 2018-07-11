/*Program declares and initializes variables

    Name: Elias Perez
    Date: July 10th, 2018
    Project: Demo lab 3 of chapter 2

*/

#include <stdio.h>

//function declares variables
int main(void)
{
    /********** VARIABLE DECLARATION **********/
    /* Syntax: <DATA TYPE> <VARIABLE NAME>; */

    int lowerLimit;    // lowest y value for graph
    int upperLimit;    // highest y value for graph
    float x, y;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial, middleInitial, lastInitial;
    double pi;        // stores the constant "pi"
    return 0;
}


//function initializes variables
int init_main(void)
{
    /******** VARIABLE INITIALIZATION ********/

    /* initialization syntax...
    <DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for grahp
    int upperLimit = 10;     // highest y value for graph
    float x = 1.0, y = 2.1;  // graphing variables 

    // used to hold a person's individual initials
    char firstInit = 'J', middleInit = 'E', lastInit = 'H';

    double pi = 3.14159265359;    // stores the constant "pi"
    int finalResult = 0;    // placeholder 0. to be changed later.

    printf("result is %d \n", finalResult);

    return 0;
}