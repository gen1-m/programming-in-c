/*CH-230-A
a5p11.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

//calling the function
int prime_else();

int main ()
{
    //declaring var 'x', the number we are going to read
    int x;
    scanf("%d", &x);

    //checking if 'x' is positive or 0
    if (x >= 0 && x != 0 )
    {
        //calling the function
        int function = prime_else(x, 2);

        //checking if function gives us 1
        if (function == 1)
        {
            //if condition true, print statement
            printf("%d is prime\n", x);
        }
        else
        {
            //if condition false, print statement
            printf("%d is not prime\n", x);
        }
    }

    return 0;
}

//function to check if a num is prime or not
int prime_else(int x,int num)
{
    //checking if 'x' is equal to 'num'(2 -> the first prime number)
    if (x == num)
    {
        //returning 1 if true
        return 1;
    }
    //checking if the remainder of x/num is 0 or x is 1   
    else if (x % num == 0 || x == 1)
    {
        //returning 0 if true
        return 0;
    }
    //if neither condition is true
    else
    {
        //return function with the 'num' + 1
        return(prime_else(x, num+1));
    }

}