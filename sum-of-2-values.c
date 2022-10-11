/*CH-230-A
a3p9.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>

/*the function which calculates the sum of 
  values in position 2 and 5, declaring two 
  parameters(v[] for array of numbers and n
  for the number of values into the array) */
double sum25(double v[], int n)
{
    double sum = v[2] + v[5];//the calculation

    /*the if else in this case checks if there 
      are 6 or more values for it to complete 
      the necessary conditions, if there are
      it prints the sum and returns the sum,
      if there aren't then prints a message,
      returns -111*/
    if (n >= 6)
    {
        printf("sum=%f\n", sum);
        return sum;
    }
    else
    {
        printf("One or both positions are invalid\n");
        return (-111);
    }
}

int main()
{
    /*declaring variables and array*/
    int n, i;
    scanf("%d", &n);
    double elements[n-1];    

    /*'for' loop for getting and storing the input
      into the array*/
    for(i = 0; i < n && n <= 20; i++)
    {
        scanf("%lf", &elements[i]);
    }

    /*calling and assigning values to our function*/
    sum25(elements, n);

    return (0);   
}