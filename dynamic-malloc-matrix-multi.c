/*CH-230-A
a5p8.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

//calling the functions
void read();
void print();
void compute();


int main ()
{
    /*
    declaring vars and arrays:
    ~ 'rows' -> the rows of first array
       and of the prod_array
    ~ 'colums' -> the colums of first array 
       and the rows of the second one
    ~ 'prod_colums' -> the colums of second
       array and the prod_array
    ~ 'firstarray' -> first matrix
    ~ 'secondarray' -> second matrix
    ~ 'prod_colums' -> multiplication matrix
    */
    int rows, colums, prod_colums;
    scanf("%d", &rows);
    scanf("%d", &colums);
    scanf("%d", &prod_colums);
    int **firstarray; 
    int **secondarray;
    int **prod_array;

    //the memory allocation of the first array
    firstarray = (int**) malloc(sizeof(int*) * colums);
    if(firstarray == NULL) 
    {
        exit(1);
    }
    for (int i = 0; i < colums; i++)
    {
        firstarray[i] = (int*) malloc(sizeof(int) * rows);
        if(firstarray[i] == NULL) 
        {
            exit(1);
        }
    } 

    //the memory allocation of the second array
    secondarray = (int**) malloc(sizeof(int*) * colums);
    if(secondarray == NULL) 
    {
        exit(1);
    }
    for (int i = 0; i < colums; i++)
    {
        secondarray[i] = (int*) malloc(sizeof(int) * rows);
        if(secondarray[i] == NULL) 
        {
            exit(1);
        }
    }

    //the memory allocation of the multiplication array
    prod_array = (int**) malloc(sizeof(int*) * colums);
    if(prod_array == NULL) 
    {
        exit(1);
    }
    for (int i = 0; i < colums; i++)
    {
        prod_array[i] = (int*) malloc(sizeof(int) * rows);
        if(prod_array[i] == NULL) 
        {
            exit(1);
        }
    } 

    //calling the functions to read values
    read(firstarray, rows, colums); 
    read(secondarray, rows, colums);

    //simple statement
    printf("Matrix A:\n");

    //calling the function to print elements
    print(firstarray, rows, colums);

    //simple statement
    printf("Matrix B:\n");

    //calling the function to print elements
    print(secondarray, rows, colums);

    //calling the function to compute values
    compute(prod_array, firstarray, secondarray, rows, colums, prod_colums);

    //simple statement
    printf("The multiplication result AxB:\n");

    //calling the function to print elements
    print(prod_array, rows, prod_colums);

    return(0);

    //freeing the memory of all the arrays
    for (int i = 0; i < rows; i++)
    {
        free(firstarray[i]);
    }
    free(firstarray);
    for (int i = 0; i < colums; i++)
    {
        free(secondarray[i]);
    } 
    free(secondarray);
    for (int i = 0; i < rows; i++)
    {
        free(prod_array[i]);
    }
    free(prod_array);
}

//function to read elements of the arrays
void read(int **array, int rows, int colums)
{
    //'for' loop to increment 'i' until rows-1
    for (int i = 0; i < rows; i++)
    {
        //'for' loop to increment 'j' until colums-1
        for (int j = 0; j < colums; j++)
        {
            //getting the values
            scanf("%d", &array[i][j]);
        }
    }
}

//function to print elements of the arrays
void print(int **array, int rows, int colums)
{
    //'for' loop to increment 'i' until rows-1
    for (int i = 0; i < rows; i++)
    {
        //'for' loop to increment 'j' until colums-1
        for (int j = 0; j < colums; j++)
        {
            //printing the elements
            printf("%d ", array[i][j]);
        }
        //adding a new line after each loop
        printf("\n");
    }
}

//function to multiply the elements of the arrays
void compute(int **prod_array, int **farr, int **sarr, 
             int rows,  int prod_colums, int colums)
{
    //declaring the vars
    int sum = 0;
    int i = 0;
    int j = 0;
    int iandj = i * j;
    int prodc = prod_colums;

    //'for' loop to increment 'i' until rows-1
    for(i = 0; i < rows; i++) 
    {
        //'for' loop to increment 'j' until colums-1
        for(j = 0; j < colums; j++) 
        {
            //another 'for' loop
            for(iandj = 0; iandj < prodc; iandj++) 
            {
                /*adding the sum of the multiplication
                  of the arrays*/
                sum += farr[i][iandj] * sarr[iandj][j];
            }
            //setting the prod array equal to sum
            prod_array[i][j] = sum; 

            //resetting the sum
            sum = 0;
        }
    }
}