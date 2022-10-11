/*CH-230-A
a3p6.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*calling the function to_pounds*/
float to_pounds(int kg, int g);

int main()
{
    /*declaring the variables for getting the input
      of kilos and grams*/
    int mass_kg, mass_g;

    /*getting the values and storing them in the vars*/
    scanf("%d", &mass_kg);
    scanf("%d", &mass_g);

    /*declaring a variable named result and assigning it
      the value of the function to_pounds*/
    float result = to_pounds(mass_kg, mass_g);

    /*printing the result*/
    printf("Result of conversion: %f\n", result);
    
    return(0);
}

/*the function which converts kg + g to pounds,
  setting the parameters kilograms and grams*/
float to_pounds(int kg, int g)
{
    /*declaring variable pounds,
      doing the calculations for kilos and grams*/
    float pounds = (kg*2.2) + (g*0.0022);
    
    /*returning the var pounds*/
    return pounds;
}
