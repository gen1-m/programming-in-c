/*CH-230-A
a4p6.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#define MIN -2147483647 //defining the lowest integer
#include <stdio.h>
#include <stdlib.h>

/*the function 'two_highest'*/
void two_highest(int arr[], int num)
{
  /*declaring vars:
  ~'highest' which is assigned the first element of the array
  ~'highest2' which is going to be the second highest element 
    of the array but at the moment we are assigning it 'MIN'
    for the reason of the program to work properly*/
  int highest = arr[0];
  int highest2 = MIN; 

  /*'for' loop which increments 'i' until
    less than num*/
  for (int i = 1; i < num; i++)
  {
    /*if highest is less than the i-th
      element than store highest in
      the var 'highest2' and the element that
      is checked into the var 'highest'
      (this allows us to get the second highest)*/
    if (arr[i] > highest) 
    {
        highest2 = highest;
        highest = arr[i];
    }
    else if(arr[i] > highest2 && arr[i] < highest)
    {
      highest2 = arr[i];
    }
  } 

  /*pritning the values of highest and the second highest*/
  printf("%d <-the highest\n", highest);
  printf("%d <-the second highest\n", highest2);
}


int main()
{
    /*declaring a var 'n' and using fscanf
      to get the value and storing into it*/
    int n;
    fscanf(stdin ,"%d", &n);

    /*declaring a pointer 'array'*/
    int *array;

    /*allocating dynamic memory for array
      with malloc() */
    array = (int*) malloc(sizeof(int)*n);

    /*using a 'for' loop to get and store our
      array elements*/
    for (int i = 0; i < n; i++)
    {
        fscanf(stdin, "%d", &array[i]);
    }
    
    /*calling our function*/
    two_highest(array, n);

    /*freeing the memory*/
    free(array);
    return (0);
}
