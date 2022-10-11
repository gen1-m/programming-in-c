/*CH-230-A
a2p8.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num == 2744)
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        if(((num / 2) == 28) && ((num / 7) == 8))
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    }
    

    return (0);
}
/*#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(((num / 2) == 28 || 1372) && ((num / 7) == 8 || 392))
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return (0);
}*/