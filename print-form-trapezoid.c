/*CH-230-A
a3p7.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*the function print_form which prints a trapezoid*/
void print_form(int n, int m, char c)
{
    /*declaring the variables:
    ~ 'i' (irrelevant var only for the loop)
    ~ 'height' (sub for 'n', just for visual)
    ~ 'smallBase' (sub for 'm', just for visual)
    ~ 'bigBase' (the second base of the trapezoid)
    */
    int i, height, smallBase, bigBase;
    height = n;
    smallBase = m;
    bigBase = m + (n - 1);
    
    /*the first 'for' loop which checks if the 
      bigger base of the trapezoid is made or not
      and if not then increments i*/
    for (i = 0; i <= bigBase; i++)
    {
        /*the second 'for' loop which checks if the 
          height is made or not, if not then moves to 
          the other line*/
        for (i = 0; i < height; smallBase++)
        {
            /*the third 'for' loop which checks if 
              the smaller base is made or not (also it
              is used throughout the code for building 
              our shapes form), if not done then 
              countinues to putting the character*/
            for (i = 0; i < smallBase; i++)
            {
                printf("%c", c);//printing the character
            }
            printf("\n");//adding a new line
        }  
    }
}

int main()
{
    /*declaring the variables and storing the values
    with scanf() function*/
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    fflush(stdin);
    scanf("%c", &c);

    /*assigning the variables to our function*/
    print_form(n, m, c);    
    return(0);
}
