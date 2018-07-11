/* program shows data types

    Name: Elias Perez
    Date: July 10th, 2018
    Project: Demo Lab 1 of Chapter 2

*/

#include <stdio.h>

//function for displaying data types
int main(void)
{
    //integer data type, no special role
    int integer = 1;
    //float data type, no special role
    float singlePrecision = 2.2;
    //double data type, no special role
    double doublePrecision = 3.3;
    //character data type, no special role
    char singleChar = '$';
    //example of characters given in ASCII, no special role
    char singleChar2 = 33;

    printf("your integer is %d \n", integer);
    printf("your float is %f \n", singlePrecision);
    printf("your double is %lf \n", doublePrecision);
    printf("your first char is %c \n", singleChar);
    printf("your second char is %c \n", singleChar2);  

    return 0;
}