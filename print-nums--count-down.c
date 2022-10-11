/*CH-230-A
a5p10.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main ()
{
    /*declaring var 'i' and getting the value
      with scanf() */ 
    int n;
    scanf("%d", &n);

    /*'for' loop to: 
    ~ increment 'i'
    ~ decrement 'n'
    ~ print the value of 'n' and 'i'
    */
    for (int i = 0; i <= n || n >= 1; i++)
    {
        printf("Number %d is: %d\n", i+1, n);
        n--;
    }

    return 0;
    
}