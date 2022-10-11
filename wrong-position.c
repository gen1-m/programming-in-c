/*CH-230-A
a3p4.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

int position(char str[], char c)
{
  int idx;
  /* Loop until end of string */
  for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
  {
  } 
  /*the for loop requires curly brackets for it to work
  the way it is intended, so to fix the code to display 
  the correct position of the first occurrence of 'g'
  i added them.*/
    
    
    /* do nothing */
  
   
  return idx;
}

int main() 
{
  char line[80];
  while (1)
  {
    printf("Enter string:\n");
    fgets(line, sizeof(line), stdin);
    printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
  }

  return (0);
}
