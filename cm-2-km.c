/*CH-230-A
a3p3.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*the convert function*/
float convert(int cm)
{
    /*assigning the 'km' variable the arithmetic action
    that does a simple division*/
    float km = cm / 100000.0;

    /*if the function runs succesfuly(which tbh why not) 
    returns the value that is stored in the variable 'km'*/
    return (km);
}

/*the main function*/
int main()
{
    /*declaring the variables num1(our 'cm')
    and num2(our 'km')*/
    int num1;
    float num2;

    /*getting the value for num1 from the keyboard*/
    scanf("%d", &num1);

    /*calling the function convert() by using num1,
      assigning the value to num2(our km) */
    num2 = convert(num1);

    /*printing the result*/
    printf("Result of conversion: %f\n", num2);

    return(0);
}
