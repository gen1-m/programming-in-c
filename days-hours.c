/*CH-230-A
a2p10.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    /*declaring n and a starting number 'i'*/
    int n, i = 1;
    
    /*getting the value and storing it on the 'n' variable*/
    scanf("%d", &n);
    
    /*the while loops below are implented 
    to validate values 0, less than 0 and bigger than 0*/

    /*if the value is 0 or less than 0, 
    the program will ask for another value*/
    while(n <= 0)
    {
        printf("Please enter a number bigger than 0: ");
        scanf("%d", &n);
    }
    /*if the value is bigger than 0 
    the program will print(until the 'i' equals 'n'):
    ~ the number of days entered;
    ~ the number of hours that the days represent;
    */
    while (n > 0 && i <= n)
    {
        printf("%d day = %d hours\n", i, (i*24));
        i++;
    }
    
    return(0);
}