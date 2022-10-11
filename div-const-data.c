/*CH-230-A
a5p2.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

//function which divides by 5
void divby5(float arr[], int size)
{
    //declaring a float array to store the results
    float after_arr[size];

    //'for' loop to increment 'i' until less than size
    for (int i = 0; i < size; i++)
    {
        //doing the division
        after_arr[i] = arr[i]/5;
    }
    
    //'for' loop to increment 'i' until less than size
    for (int i = 0; i < size; i++)
    {
        //printing elements of array
        printf("%.3f ", after_arr[i]);
    }

    //adding a new line
    printf("\n");    
}

int main()
{
    //declaring a float array and assigning values
    float before_arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    //declaring a 'size' var and giving it the number of array
    int size = 6;

    //simple statement
    printf("Before:\n");

    //'for' loop to increment 'i' until less than size
    for (int i = 0; i < size; i++)
    {
        //printing elements of array
        printf("%.3f ", before_arr[i]);
    }

    //adding a new line
    printf("\n");
    
    //simple statement
    printf("After:\n");

    //calling the function
    divby5(before_arr, size);

    return(0);
}