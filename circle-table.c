/*CH-230-A
a4p1.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main()
{
    /*declaring the variables*/
    float x, up, low, step;

    /*using scanf() to get the values*/
    scanf("%f", &low);
    scanf("%f", &up);
    scanf("%f", &step);

    /*using the 'for' loop to assign x the lower limit,
      then validating that is lower or equal to the upper
      one and if it is true: increment the lower one */
    for (x = low; x <= up; low++)
    {
        /*printing the values: x, area, perimeter*/
        printf("%f %f %f\n", x, (x*x*M_PI), (2*M_PI*x));
        x += step;//adding step to the value x 
    }
    
    return 0;

}