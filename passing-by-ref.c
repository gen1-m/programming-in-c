/*CH-230-A
a4p10.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

/*function which computes
 ~production between two numbers, 
 ~division between two numbers,
 ~first number to the power of the second
 ~the rational number 1/(second number)
  */ 
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = (a * b);//multiplication
    *div = (a/b);//division
    *pwr = pow(a, b);//pow() from math lib
    *invb = (1/b);//division of 1 over b
}

int main()
{
    //declaring two floats
    float a, b;

    //getting the values of our floats
    fscanf(stdin, "%f", &a);
    fscanf(stdin, "%f", &b);

    //declaring the other vars
    float prod , div , pwr , invb;
    
    //calling our function
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    //printing the values
    printf("%f\n", prod);
    printf("%f\n", div);
    printf("%f\n", pwr);
    printf("%f\n", invb);

    return (0);
}

