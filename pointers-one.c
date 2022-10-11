<<<<<<< HEAD
/*CH-230-A
a2p5.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
=======
>>>>>>> 223ae8414ebad7dbd41249dea9ab1e18abd8f460
#include <stdio.h>

int main()
{
<<<<<<< HEAD
    /*declaring the variable and pointer*/
    int a, *ptr_a; 

    /*getting the pointer from the keyboard*/
    scanf("%d", &a);

    /*displaying the number and the address 
    by assigning &a to the pointer*/
    printf("Your number is: %d.\n", a);
    printf("%d's address is:%p.\n", a, (ptr_a = &a));
    
    /*adding 5 to the pointers value (a.k.a our number)
    ,displaying it and the address which 
    we expect to be the same*/
    printf("Your new number is: %d.\n", (*ptr_a = *ptr_a + 5));
    printf("%d's address is:%p.\n", a, ptr_a);
=======
    int a;
    scanf("%d", &a);
    printf("A is %d", a);

    int ptr_a = a;
    printf("Address of a is %d.", ptr_a);
>>>>>>> 223ae8414ebad7dbd41249dea9ab1e18abd8f460

    return (0);
}