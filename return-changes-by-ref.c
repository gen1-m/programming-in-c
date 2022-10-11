/*CH-230-A
a3p10.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main()
{
    /*declaring the variables and getting input*/
    float a, b, p;
    scanf("%f", &a);
    scanf("%f", &b);

    /*Both results here will be the same, because the
      product will multiply a and b and return the new result,
      meanwhile productbyref() will initialize the variable p with (a * b)*/
    printf("Product by product: %f\n", product(a, b));
    productbyref(a, b, &p);
    printf("Product by productbyref: %f\n", p);

    /*Here we want to see what happens before and after we call modifybyref,
      a and b retain their original values, but after we do this, a and b are modified,
      this is because we've modified the data at their respective memory addresses*/
    printf("a before modifybyref: %f\n", a);
    printf("b before modifybyref: %f\n", b);

    modifybyref(&a, &b);

    printf("a after modifybyref: %f\n", a);
    printf("b after modifybyref: %f\n", b);

    return 0;
}

float product(float a, float b)
{
    //product of a and b
    return a * b;
}

void productbyref(float a, float b, float *p)
{
    //set the data at the memory address of p to be a * b.
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    //increment the data at the memory address of a and b 
    *a += 3;
    *b += 11;
}