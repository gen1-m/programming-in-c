/*CH-230-A
a2p6.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    /*declaring the variables and pointers*/
    double x, y, *ptr_1, *ptr_2, *ptr_3;

    /*getting the values from the keyboard*/
    scanf("%lf", &x);
    scanf("%lf", &y);

    /*assigning the pointers addresses*/
    ptr_1 = &x;
    ptr_2 = &x;
    ptr_3 = &y;

    /*proving that ptr_1 and ptr_2 have the same
    address and that ptr_3 has a different one by 
    displaying them with printf() function*/
    printf("Address of pointer 1 is: %p.\n", ptr_1);
    printf("Address of pointer 2 is: %p.\n", ptr_2);
    printf("Address of pointer 3 is: %p.\n", ptr_3);

    return(0);
}