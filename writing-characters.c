/*CH-230-A
a3p2.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    /*declaring the variables ch, 
    n(for the number aside the character) and i*/
    char ch;
    int n, i;

    /*getting the values and storing 
    them in the variables*/
    scanf("%c", &ch);
    scanf("%d", &n);
    fflush(stdin);
    
    /*assigning i the starting point(value = 1),
    i will increment until it equals n and then
    stopping the loop*/
    for (i = 0; i <= n; i++,ch++)
    {
        /*characters and numbers will display here*/
        printf("%c-%d\n", ch, i);

        /*incrementing the value of char 
        to display the next letter*/
        
    }    
    /*also sorry to include this comment here 
    but I kinda forgot to put my info block at 
    the start of the code that we did in class a3_p1.c
    so please don't deduct points for that
    (if you could tell the other TAs that too 
    it would be nice :) )*/
    
    return(0);
}
