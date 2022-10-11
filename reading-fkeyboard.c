/*CH-230-A
a2p1.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2;
    scanf("%lf", &num1);
    scanf("%lf", &num2);         
    printf("sum of doubles=%lf\n", (num1 + num2)); 
    printf("difference of doubles=%lf\n", (num1 - num2));
    printf("square=%lf\n", num1*num1);
    int num3, num4;
    scanf("%d", &num3);  
    scanf("%d", &num4);
    printf("sum of integers=%d\n", (num3 + num4));  
    printf("product of integers=%d\n", (num3 * num4));
    char alpha, beta;
    getchar();
    scanf("%c", &alpha);
    getchar(); 
    scanf("%c", &beta);
    printf("sum of chars=%d\n", (alpha + beta));
    printf("product of chars=%d\n", (alpha*beta));
    printf("sum of chars=%c\n", (alpha + beta));
    printf("product of chars=%c\n", (alpha*beta));
    return(0);
}