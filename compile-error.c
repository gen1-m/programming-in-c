/*CH-230-A
a1p3.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; /*Defining the float number as float instead of int.*/

    result = a / b;

    printf("The result is %f\n", result);/*Wrote the correct %f for doubles instead of %d.*/

    return 0;
}