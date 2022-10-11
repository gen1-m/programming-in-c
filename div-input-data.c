/*CH-230-A
a5p4.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

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
    /*declaring a var 'n' and storing value 
      in it with scanf() which is going to 
      be our number of elements*/
    int n;
    scanf("%d", &n);
    
    /*declaring a float char pointer 'before_array'
      and turning it into an array by allocating 
      dynamic memory into it*/
    float *before_arr;
    before_arr = (float*) malloc(sizeof(float)*n);
    
    //'for' loop to increment 'i' until less than n
    for (int i = 0; i < n; i++)
    {
        //getting and storing the values with scanf() 
        scanf("%f", &before_arr[i]);
    }
    
    //simple statement
    printf("Before:\n");

    //'for' loop to increment 'i' until less than n
    for (int i = 0; i < n; i++)
    {
        //printing elements of array
        printf("%.3f ", before_arr[i]);
    }

    //adding a new line
    printf("\n");
    
    //simple statement
    printf("After:\n");

    //calling the function
    divby5(before_arr, n);

    return(0);
}