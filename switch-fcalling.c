/*CH-230-A
a4p3.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

/*calling our functions*/
float geometric_mean();
float highest_in_the_room();
float lowest_in_the_room();
float sum_of_array();


int main()
{
  /*declaring variables and arrays
  ~ 'limit' which is the limit of the elements
    of the floats stored in the array
  ~ 'input[]' which is the float array*/
  int limit = 0;
  float input[15];
    
  /*the 'for' loop which increments 'i' and 'limit'
   as long as is less than 15*/
  for (int i = 0; i < 15; i++, limit++)
  {
    /*getting the float values with scanf
      and storing them in the input*/
    scanf("%f", &input[i]);

    /*if we enter a negative value the 
      program will not read any values
      anymore*/
    if (input[i] < 0)
    {
      break;
    }                        
  }

  /*declaring a var 'gmean' and assigning it
    the value of our function geometric_mean
    by calling it*/
  float gmean = geometric_mean(input, limit);

  /*declaring a var 'the_highest' and assigning it
    the value of our function 'highest_in_the_room'
    by calling it*/
  float the_highest = highest_in_the_room(input, limit);

  /*declaring a var 'the_lowest' and assigning it
    the value of our function 'lowest_in_the_room'
    by calling it*/
  float the_lowest = lowest_in_the_room(input, limit);

  /*declaring a var 'sum' and assigning it
    the value of our function 'sum_of_array'
    by calling it*/
  float sum = sum_of_array(input, limit);

  /*declaring a char var 'enter' for entering 
    the characters rewuired for the switch 
    function and getting those values with 
    scanf() */
  char enter;
  scanf(" %c", &enter);

  /*the 'switch' function*/
  switch (enter)
  {
  case 'm':
  /*printing the value of gmean*/
  printf("%f ", gmean);
    break;//break the function

  case 'h':
  /*printing the value of 'the_highest'*/
  printf("the highest number = %f", the_highest);
    break;//break the function

  case 'l':
  /*printing the value of 'the_lowest'*/
  printf("the lowest number = %f", the_lowest);
    break;//break the function

  case 's':
  /*printing the value of 'sum'*/
  printf("sum of elements = %f", sum);
    break;//break the function

  default:
    break;//break the function
  }
  
  return (0);
}

/*function which executes the geometric mean formula*/
float geometric_mean (float arr[],int num)
{
  /*declaring a float var 'prod' and assign
    it the value of the first element */
  float prod = arr[0];
  int i;
  
  /*making a 'for' loop which increments 'i' as long 
    as is less than num variable, while multiplying
    the elements inside of the array*/
  for (i = 1; i < num; i++)
  {
    /*getting the product of all the elements
      inside of the array*/
    prod *= arr[i];
  }

  /*calling the function pow to increase the product 
    to the rational number '1/the total number of 
    elements inside the array' to basically get the 
    root of any number in any grade*/
  float sqrt_i = pow((double)prod, (double)1/num);
  
  /*returning the value of sum*/
  return sqrt_i;    

}
  
/*function which compares the elements in an array
  and returns the highest in that array*/
float highest_in_the_room (float arr[], int num)
{
  /*declaring a var 'highest'*/
  float highest;

  /*'for' loop which increments 'i' until
    less than num*/
  for (int i = 0; i < num; i++)
  {
    /*if highest is less than the i-th
      element than store that element in
      the var 'highest'*/
    if (highest < arr[i])
    {
      highest = arr[i];
    }    
  }

  /*returning the value of highest*/  
  return highest;
  
}

/*function which returns the lowest value in the 
  array*/
float lowest_in_the_room (float arr[], int num)
{
  /*declaring a variable called lowest*/
  float lowest;

  /*'for' loop which increments 'i' until
    less than num*/
  for (int i = 0; i < num; i++)
  {
    /*if the lowest is less than the i-th 
      element than store that element in lowest*/
    if (lowest > arr[i])
    {
      lowest = arr[i];
    }
  }

  /*return the value of lowest*/
  return lowest;  
}

/*function which returns the sum of all the elements
  stored inside of the array*/
float sum_of_array (float arr[], int num)
{
  /*declaring a float var 'sum' and assign
    it the value 0.0 */
  float sum = 0.0;

  /*making a 'for' loop which increments 'i' as long 
    as is less than num variable, while adding the 
    i-th element of array to the previous sum*/
  for (int i = 0; i < num; i++)
  {
    sum += arr[i];
  }
  
  /*returning the value of sum*/
  return sum;   
}

