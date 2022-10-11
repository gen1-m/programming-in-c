/*CH-230-A
a4p12.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*the function which will replace the characters 
and print the following statements*/
void replaceAll(char str[], char c, char e)
{
    //'for' loop to replace the character
    for(int i = 0; str[i] != '\n'; i++) 
    {
        /*if the element is equal to 'c' 
          replace it with 'e'*/
        if(str[i] == c) 
        {
            str[i] = e;
        }
    }

    //printing the statements
    printf("The previous character: %c\n", c);
    printf("The character replacing the above one: %c\n", e);

    //'for' loop to print the element
    for(int i = 0; str[i] != '\n'; i++) 
    {
        printf("%c", str[i]);
    }
}

int main()
{
    //declaring a string of max 80 elements
    char string[80]; 

    //declaring two char vars
    char a, b;

    /*Character a is the one to be replaced, b will replace it*/
    while(1) 
    {   
        //getting the string with fgets
        fgets(string, sizeof(string), stdin);

        //if the word stop is written the loop breaks
        if((string[0]=='s') && (string[1]=='t') && 
        (string[2]=='o') && (string[3]=='p')) {
            break;
        }

        //getting the values of a and b
        scanf(" %c", &a);
        scanf(" %c", &b);

        //calling the function
        replaceAll(string, a, b);

        //printing a new line
        printf("\n");
    }

    return (0);
}