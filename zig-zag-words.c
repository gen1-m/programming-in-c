/*CH-230-A
a4p2.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main()
{
    /*declaring a char array of 100 and getting input
      with fgets()*/
    char s[100];
    fgets(s, sizeof(s), stdin);
    
    /*declaring an int length_s to store the length of 
      our string*/
    int length_s = strlen(s);
    
    /*the 'for' loop below:
    ~ declares an initial value 'i'
    ~ if 'i' is less than length_s then increment i
    ~ (I have added a '-1' after length_s to make sure
       that we have no new lines after the printf() ends)*/
    for (int i = 0; i < length_s - 1; i++)   
    {
        /*if i(basically the string position) is divisible
          by 2 then print the char, if it isn't then print
          the char one space to the right*/
          
        if (i % 2 == 0)
        {
            printf("%c\n", s[i]);//displaying the char
        } 
        else
        {
            printf(" %c\n", s[i]);//displaying the char 
        }
    }
    
    return (0);
}