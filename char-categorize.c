/*CH-230-A
a2p9.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char smth;
    scanf("%c", &smth);

    if(isalpha(smth))
    {
        printf("%c is a letter\n", smth);
    }
    else if(isalnum(smth))
    {
        printf("%c is a digit\n", smth);
    }
    else
    {
        printf("%c is some other symbol\n", smth);
    }

    return (0);
}