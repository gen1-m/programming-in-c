/*CH-230-A
a5p3.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//calling the function
int count_lower();

int main()
{
    /*declaring a var 'size' which is going to be our
      array size*/
    int size = 60;

    /*declaring a char pointer '*string' and allocating 
      allocating memory to it*/
    char *string = (char*) malloc(sizeof(char)*size);
    
    //'for' loop to increment 'i' until end of string
    for (int i = 0; *string != '\0'; i++)
    {
        //reading the string with fgets
        fgets(string, size, stdin);

        //checking if the input is a character, else break
        if (isalpha(*string))
        {
          /*declaring a var 'num' and assigning the 
            value of our function*/
          int num = count_lower(string); 

          //printing the number of lowercases found 
          printf("the number is :%d\n", num);
        }
        else
        {
          //break;
          break;
        }      
    }

    return (0);
}

//function to count the lowercase characters
int count_lower(char *str)
{
    /*declaring a var 'count' which represents
      the number of lowercase characters*/ 
    int count;

    //'for' loop to increment 'i' until end of string
    for (int i = 0; *str != '\n'; i++, str++)
    {
        //searching through the string using the pointer

        /*if the current element is a lower case 
          then increment 'count'*/
        if (*str >= 'a' && *str <= 'z')
        {
            count++;//incrementing count
        }
        
    }
    
    //returning 'count' var
    return count;
}