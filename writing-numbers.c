/*CH-230-A
a3p1.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    /*declaring the variables
    (x == a float; n == the time the loop will run) */
    float x;
    int n, i = 1;

    /*getting the values and 
    storing them to their represantatives*/
    scanf("%f", &x);
    scanf("%d", &n);
    fflush(stdin);
    
    /*the first while loop checks if n is 0 or less than 0.
    if the condition is true it would ask for input,
    if it's not it would countinue to the second while loop*/
    while (n <= 0)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    /*the second while loop checks if n is bigger than 0
    and prints the float number 'n' until:
    i(starting point) = n(the number we inputed)*/
    while (n > 0 && i <= n )
    {
        printf("%f\n", x);
        i++;
    }
       

    return(0);   
}