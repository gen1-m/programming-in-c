/*CH-230-A
a2p2.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char alpha;
    alpha = getchar();
    printf("character=%c\n", alpha);
    printf("decimal=%d\n", alpha);
    printf("octal=%o\n", alpha);
    printf("hexadecimal=%x\n", alpha);

    return(0);

}