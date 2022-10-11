/*CH-230-A
a3p5.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    /*declaring variables: 
    ~ 'c'(checking var),
    ~ 'n' (the number of the vars inside the array)
    ~ 'temps' (the array var where the temperatures will be stored) */
    char c;
    scanf("%c", &c);
    int n;
    scanf("%d", &n); /*getting the number of the vars to be entered*/
    double s, temps[n-1];

    /*for every value entered in the array temps, 
    add 1 to i until it becomes equal to n*/
    for (int i = 0; i <= (n-1); i++)
    {
        scanf("%lf", &temps[i]);
    }
    

    for (int j = 0; j <= (n-1); j++)
    {
        s += temps[j];
    }
    printf("%lf\n", s);
    switch (c)
    {
    case 's':
        printf("YES BITCH!!!\n");
        break;
    
    default:
        break;
    }

    printf("Temperatures: %lf, %lf, %lf, %lf, %lf.", temps[0], temps[1], temps[2], temps[3], temps[4]);
    
    return(0);
}
