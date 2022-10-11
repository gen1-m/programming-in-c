/*CH-230-A
a4p11.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*the function which determines the occurrence of a
  character in a string*/
int count_insensitive(char *str, char c) 
{
    //declaring a var 'num' and assign 0 to it
    int num = 0;
    
    /*'for' loop which increments 'i' if is less
      than the length of str*/
    for (int i = 0; i < strlen(str); i++)
    {
        /*if the current element is a lower case or uppercase*/
        if (str[i] == tolower(c) || str[i] == toupper(c))
        {
            num++;//increment the value of 'n'
        }  
    }

    //returning the value 
    return num;
}
int main()
{
    //declaring two char pointers
    char *str1;
    char *str2;

    //decalring an int var 'n' and assigning it 50
    int n = 50;

    //allocating pointer 'str1' turning it into a string
    str1 = (char*) malloc(sizeof(char)*n);
    
    //allocating pointer 'str2' turning it into a string
    str2 = (char*) malloc(sizeof(char)*n);
    if (str1 == NULL)
    {
        exit(7);
    }
    
    //the 'for' loop
    for (int i = 0; i < n; i++)
    {
        //getting the characters in str1
        scanf("%c", &str1[i]);

        //when we encounter a new line the program breaks
        if (str1[i] == '\n')
        {
            str1[i] = '\0';//evaluating the string terminator
            break;
            n = i;
        }   
    }

    if (str2 == NULL)
    {
        exit(14);
    }

    strcpy(str2, str1);//copying str1 to str2
    free(str1);//feeing the memory 
    
    //printing the occurrences
    printf("The character 'b' occurs %d times.\n",count_insensitive(str2,'b'));
    printf("The character 'H' occurs %d times.\n",count_insensitive(str2,'H'));
    printf("The character '8' occurs %d times.\n",count_insensitive(str2,'8'));
    printf("The character 'u' occurs %d times.\n",count_insensitive(str2,'u'));
    printf("The character '$' occurs %d times.\n",count_insensitive(str2,'$'));

    free(str2);//freeing the memory
    return (0);
}