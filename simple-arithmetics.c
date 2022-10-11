/*CH-230-A
a1p4.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int x = 17;
    int y = 4;
    int sum = x + y;
    int product = x * y;
    int diff = x - y;
    float div = (float)x / y;
    int rem = x%y;

    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);    
    printf("difference=%d\n", diff);   
    printf("division=%f\n", div);    
    printf("remainder of division=%d\n", rem);

    return(0);
}