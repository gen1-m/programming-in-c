/*CH-230-A
a4p9.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/*function which returns the product of 
  the highest and lowest values in a array*/
int prodminmax (int arr[], int n)
{
    /*declaring vars highest and lowest 
      and assigning them the first element
      of our array*/
    int highest = arr[0]; 
    int lowest = arr[0];

    /*'for' loop to determine the highest
      the lowest value of our array*/
    for (int i = 0; i < n; i++)
    {
        /*if 'highest' is less than the current
          element than replace 'highest' with that
          element*/
        if (highest < arr[i])
        {
            highest = arr[i];
        } 
        /*if 'lowest' is greater than the current
          element than replace 'lowest' with that
          element*/
        else if (lowest > arr[i])
        {
            lowest = arr[i];
        }
    }
    
    //returning the product of our two ints
    return highest*lowest;
}

int main()
{
    //declaring a var 'n'(the number of our elements)
    int n;

    //getting a value and storing into 'n'
    scanf("%d", &n);

    /*declaring a pointer 'arr' and turning 
      into an array by allocating memory*/ 
    int *arr;
    arr = (int*) malloc(sizeof(int)*n);

    /*'for' loop to get and store the values 
      needed for our array*/
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*decalring var 'prod' and assigning it
      the value of our function*/
    int prod = prodminmax(arr, n);

    //printing the product
    printf("The product = %d", prod);
     
    return (0);

    //freeing the memory
    free(arr);
}