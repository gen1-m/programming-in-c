/*CH-230-A
a5p7.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    /*declaring vars and arrays:
    ~ 'size' -> the size of the array
    ~ 'string_1' -> the first string
    ~ 'string_2' -> the second string*/
    int size = 100;
    char string_1[size];
    char string_2[size];
    
    /*getting the strings with scanf() function,
      [^\n] -> accepting the strings with spaces*/
    scanf("%[^\n]%*c", &*string_1);
    scanf("%[^\n]%*c", &*string_2);

    //declaring a pointer 'c_array'
    char *c_array;

    //dynamically allocating the pointer
    c_array = (char*) malloc (sizeof(char)*size);

    //using the strcat() function to append the two strings
    c_array = strcat(string_1, string_2);

    //printing the new string
    printf("Result of concatenation: %s\n", c_array);

    return(0);

    //freeing the memory
    free(c_array);
}

/*
since the exercise was not really that clear to me,
I made this propgram with the two strings dynamically
allocated as well:

    int size = 270;
    char *string_1;
    char *string_2;
    string_1 = (char*) malloc (sizeof(char)*size);
    string_2 = (char*) malloc (sizeof(char)*size);
    
    scanf("%[^\n]%*c", &*string_1);
    scanf("%[^\n]%*c", &*string_2);

    char *c_array;
    c_array = (char*) malloc (sizeof(char)*size);

    c_array = strcat(string_1, string_2);

    printf("Result of concatenation: %s\n", c_array);


    free(string_1);
    free(string_2);
    free(c_array);

*/