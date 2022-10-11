/*CH-230-A
a5p1.c
Eugen Mamaj
emamaj@jacobs-university.de
*/

#include <stdio.h>

//'function' which prints in a 'triangle' manner
void triangle(int n, char ch)
{
    /*'for' loop which decrements 'i' until it is
      greater than 0*/
    for (int i = n; i > 0; i--)
    {
        /*'for' loop which decrements 'j' until it 
           is greater than 0*/
        for (int j = i; j > 0; j--)
        {
            //printing the character
            printf("%c", ch);
        }
        //adding a new line after each first loop
        printf("\n");               
    }
}

int main()
{
    //declaring two vars, one int and one char
    int n;
    char ch;

    //getting the values which scanf()
    scanf("%d", &n);
    scanf(" %c", &ch);

    //calling the function
    triangle(n, ch);

    return 0;
}