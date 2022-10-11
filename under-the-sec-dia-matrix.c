/*CH-230-A
a4p8.c
Eugen Mamaj
emamaj@jacobs-university.de
*/
#include <stdio.h>

/*declaring the global var 'n' which is going to be 
  our array's dimension (declaring it as a global var 
  in order to use to our main and other functions*/
int n;

//calling our functions
void matrix ();
void secondary_diagonal ();

int main()
{
    //getting our array's dimensions value
    fscanf(stdin, "%d", &n);

    /*declaring our 2D array and assigning it 
    the limit for rows and columns*/
    int array[30][30];

    //'for' loop to get our elements
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        fscanf(stdin, "%d", &array[i][j]);  
      }    
    }   

    //calling functions and setting up the parameteres
    matrix(array);
    secondary_diagonal(array);
    
    return (0);
}

/*function for printing the elements of the array
  in a matrix style*/
void matrix (int arr[30][30])
{
    //simple statement
    printf("The entered matrix is:\n");

    //'for' loop
    for (int i = 0; i < n; i++)
    {
        //another 'for' loop
        for (int j = 0; j < n; j++)
        {
            //printing the elements
            printf("%d ", arr[i][j]);
        }
        //adding a new line after each loop
        printf("\n");
    }
}

/*function to print the elements under 
  the main diagonal*/
void secondary_diagonal(int arr[30][30])
{
    //simple statement
    printf("Under the secondary diagonal:\n");

    //'for' loop 
    for (int i = 1; i < n; i++)
    {
        /*'for' loop for printing the 
        elements under the secondary diagonal*/
        for (int j = n-i; j < n; j++)
        {
            //printing the elements
            printf("%d ", arr[i][j]);
        }
    }
    //adding a new line after ending the loop
    printf("\n");
}