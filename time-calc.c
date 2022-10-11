/*CH-230-A
a2p3.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int weeks, days, hours;
    scanf("%d", &weeks);
    scanf("%d", &days);
    fflush(stdin);
    scanf("%d", &hours);

    int totsHours = weeks * 7 * days * 24 * hours; 
    /*In this [int] line I have simply converted and
    calculated all of the variables to find the total number of hours. */

    printf("Total Hours = %d", totsHours);
    
    return (0);
}