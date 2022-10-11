/*CH-230-A
a5p9.c
Eugen Mamaj
emamaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//calling the functions
void read_array(int ***arr, int row, int col, int dep);
void print_sections(int ***arr, int row, int col, int dep);

int main() 
{
    /*
    declaring the vars and arrays and reading:
    ~ 'array' -> the 3D array
    ~ 'x' -> rows of the array
    ~ 'y' -> columns of the array
    ~ 'z' -> depth of the array
    */
    int ***array; 
    int x, y, z; 
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    //allocating memory fo the 3D array
    array=(int***)malloc(sizeof(int**)*x);
    if(array==NULL) 
    {
        exit(1);
    }
    for(int i=0; i<x; i++) 
    {
        array[i]=(int**)malloc(sizeof(int*)*y);
        if(array[i]==NULL) 
        {
            exit(1);
        }
        for(int j=0; j<y; j++) 
        {
            array[i][j]=(int*)malloc(sizeof(int)*z);
            if(array[i][j]==NULL) 
            {
                exit(1);
            }
        }
    } 
    //calling the function to read the values
    read_array(array, x, y, z); 

    //calling the function to print the values
    print_sections(array, x, y, z);

    //freeing the memory
    for(int i=0; i<x; i++) 
    {
        for(int j=0; j<y; j++) 
        {
            free(array[i][j]);
        }
        free(array[i]);
    }
    free(array);

    return 0;
}
//function which reads the elements 
void read_array(int ***arr, int row, int col, int dep) 
{
    //declaring vars for the loop
    int r, c, d;

    //the 'for' loop
    for(r=0; r<row; r++) 
    {
        for(c=0; c<col; c++) 
        {
            for(d=0; d<dep; d++) 
            {
                scanf("%d", &arr[r][c][d]);
            }
        }
    }
}

//function which prints the elements
void print_sections(int ***arr, int row, int col, int dep) 
{
    //declaring vars for the loop
    int r, c, d;

    //the 'for' loop
    for(d=0; d<dep; d++) 
    { 
        //printing sections for each depth
        printf("Section %d:\n", d+1);
        for(r=0; r<row; r++) 
        {
            for(c=0; c<col; c++) 
            {
                printf("%d ", arr[r][c][d]);
            }
            printf("\n");
        }
    }

}
