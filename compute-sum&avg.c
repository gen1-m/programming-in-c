/*CH-230-A
a3p8.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*the function which calculates the sum of the elements*/
float sum(float arr[], float irrelevant)
{
    /*declaring the variable sum*/
    float sum = 0;
    
    /*loop for the array*/
    for (int i = 0; i < irrelevant; i++)
    {
        sum += arr[i];//the calculation
    }
    return sum;
}

/*the function which calculates the average of elements*/
float average(float arr[], float irrelelevant)
{
    return sum(arr, irrelelevant) / irrelelevant;//the calculation
}

int main()
{
    /*declaring the variables and arrays*/
    float arr[10], s = 0.0, irrelevant = 0.0;
    int i;

    for (i = 0; i <= 10; i++, irrelevant++)
    {
        scanf("%f", &arr[i]);
        s += arr[i];

        /*checking if the sum is valid*/
        if(s == -99.0)
        {
            break;
        }
    }

    /*calling the functions*/
    float smth1 = sum(arr, irrelevant);
    float smth2 = average(arr, irrelevant);

    /*printing the results*/
    printf("The sum is: %f\n", smth1);
    printf("The average is: %f\n",smth2);
    
    
    return(0);
}
