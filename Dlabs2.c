/* program shows data type sizes

    Name: Elias Perez
    Date: July 10th, 2018
    Project: Demo Lab 2 of Chapter 2

*/

#include <stdio.h>

//function for displaying size of given data types
int main(void)
{
    //integer data type, no special role
    int integer = 1;
    //float data type, no special role
    float singlePrecision = 2.2;
    //double data type, no special role
    double doublePrecision = 3.3;
    //character data types, either in character or ASCII
    char singleChar = '$';
    char singleChar2 = 33;

    printf("size of int is %d \n", sizeof(integer));
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("size of double is %d \n", sizeof(doublePrecision));
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("size of char 2 is %d \n", sizeof(singleChar2));

    return 0;
}