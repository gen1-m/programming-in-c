/*CH-230-A
a4p5.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>

            //CHANGE//

/*to keep it short, basically the program is 
 the same as the previous one, the only change
 being defining a pointer 'ptr',assigning it the 
 first element of the string and substituting all
 of the str[i] with *ptr)*/

/*the function which counts consonants*/
int count_consonants(char str[])
{
    //declaring a var to store the val of consonants
    int consonants = 0;
    
    //'for' loop to check if a vowel or not
    for (char *ptr = &str[0];  *ptr != '\0'; ptr++)
    {
        //if is not vowel and is a alphabetic character
        if (isalpha(*ptr) && (*ptr != 'a') && *ptr != 'e' 
            && *ptr != 'i' && *ptr != 'o' && *ptr != 'u' 
            && *ptr != 'A' && *ptr != 'E' && *ptr != 'I' 
            && *ptr != 'O' && *ptr != 'U')
        {
            consonants++;
        }
    }
    
    //return the value
    return consonants;   
}

int main()
{
    //decalring an array of chars of value 100
    char str[100];

    /*while loop to get the string and print the
      value of consonants*/
    while (str[0] != '\n')
    {
        //getting the string
        fgets(str, sizeof(str), stdin);
        
        //if we just enter a new line the code breaks
        if (str[0] != '\n')
        {
            printf("Number of consonants=%d\n", count_consonants(str));
        }
    }
      
    return (0);
}