/*CH-230-A
a5p6.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring vars and getting the value
    int n, p_elements;
    scanf("%d", &n);

    //declaring an array of floats and allocating memory
    float *array = (float*) malloc (sizeof(float)*n);
    if(array == NULL) { 
        exit(1);
    }

    //'for' loop to get the elements of the array
    for (int i = 0; i < n ; i++)
    {
        scanf("%f", &array[i]);                    
    }

    //declaring a float and assigning the first element
    float *p = array;

    //checking if the current element is negative or not
    while (*p >= 0)
    {
        p++;
    }
    
    //doing the count
    p_elements = p - array;

    //printing the value
    printf("Before the first negative value: %d elements", p_elements);
    
    return (0);

    //freeing the array
    free(array);
}