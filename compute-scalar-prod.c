/*CH-230-A
a5p5.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

//global var 'n' used as the number of elements in arrays
int n;

//calling our functions
double scalar_prod();
void the_smallest();
void the_largest();

int main()
{
    //getting and storing the value of 'n' 
    scanf("%d", &n);

    /*declaring two arrays and one var
    ~ array 'v' which is going to be our first double array
    ~ array 'w' which is going to be our second double array
    ~ var 'scalar' which is going to be a var with the value 
      of the function 'scalar_prod' */
    double v[n], w[n], scalar; 

    //'for' loop to increment 'i' until less than 'n'
    for (int i = 0; i < n; i++)
    {
        //getting and storing the values
        scanf("%lf", &v[i]);    
    }
    
    //'for' loop to increment 'i' until less than 'n'
    for (int i = 0; i < n; i++)
    {
        //getting and storing the values
        scanf("%lf", &w[i]);     
    }

    /*assigning 'scalar' the value of 'scalar_prod'
      by calling it with the right parameters*/
    scalar = scalar_prod(v, w);

    //displaying the value of scalar
    printf("Scalar product=%lf\n", scalar);

    //calling our functions for the rest of the code
    the_smallest(v);
    the_largest(v);
    the_smallest(w);
    the_largest(w);
    
    return(0);
}

//function which calculates the scalar product
double scalar_prod(double vec1[n], double vec2[n])
{
    /*declaring the vars:
    ~ 'prod' for the product of the individual
       elements of the vectors
    ~ 'sprod' for computing the sum of all prods 
      */
    double prod, sprod;

    //'for' loop to increment 'i' until less than 'n'
    for (int i = 0; i < n; i++)
    {
        /*multiplying each element of vec1 with
          each element of vec2 */ 
        prod = vec1[i] * vec2[i];

        //adding each prod value together
        sprod += prod;
    }
    
    //returning the value of 'sprod'
    return sprod;
}

/*function which returns the smallest value 
  and its position in a given array*/
void the_smallest(double vec[n])
{
    //declaring a var 'position' and assigning 0 to it
    int position = 0;

    /*declaring a var 'smallest' and assigning 
      the first element */
    double smallest = vec[0];

    //'for' loop to increment 'i' until less than 'n'
    for (int i = 0; i < n; i++)
    {
        /*if 'smallest' is greater than the current
          element than replace 'smallest' with that
          element*/
        if (smallest > vec[i])
        {
            smallest = vec[i];

            /*assigning 'position' the value 'i'
              of the current element*/
            position = i;
        } 
    }
    
    //printing the values
    printf("The smallest = %lf\n", smallest);
    printf("Position of smallest = %d\n", position);
}

/*function which returns the largest value 
  and its position in a given array*/
void the_largest(double vec[n])
{
    //declaring a var 'position' and assigning 0 to it
    int position = 0;

    /*declaring a var 'largest' and assigning 
      the first element */
    double largest = vec[0];

    //'for' loop to increment 'i' until less than 'n'
    for (int i = 0; i < n; i++)
    {
        /*if 'largest' is less than the current
          element than replace 'largest' with that
          element*/
        if (largest < vec[i])
        {
            largest = vec[i];

            /*assigning 'position' the value 'i'
              of the current element*/
            position = i;
        }  
    }
    
    //printing the values
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", position);
}
