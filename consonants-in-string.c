/*CH-230-A
a4p4.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>


/*the function which counts consonants*/
int count_consonants(char str[])
{
    //declaring a var to store the val of consonants
    int consonants = 0;
    
    //'for' loop to check if a vowel or not
    for (int i = 0; str[i] != '\0'; i++)
    {
        //if is not vowel and is a alphabetic character
        if (isalpha(str[i]) && (str[i] != 'a') && str[i] != 'e' 
            && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' 
            && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' 
            && str[i] != 'O' && str[i] != 'U')
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