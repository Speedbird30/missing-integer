/*
Name: Sumit Subhash Jadhav
U89612131.
The function of this program is to check if the given array has the integers from 1 to the input length of the array and to print out the values that are missing.
*/
#include <stdio.h>
void find(int array[],int size_of_array, int b[]);     //initiating a function
void find(int array[], int size_of_array, int b[])      //Definition of the function that was earlier initiated
{
    int i, j;

    for (i = 0; i < size_of_array; i++)       //Comparing elements
    {
        for (j = 0; j <= size_of_array; j++)
        {
            if(array[i] == j)
            {
                b[j-1] = 1;
                break;
            }
        }
    }
}

int main()
{
    int i;    //declaring variables
    int size_of_array;
    printf("Enter the length of the input array: ");
    scanf("%d",&size_of_array);
    int array[size_of_array];
    int b[50]={};
    printf("Enter element of the input array: ");
    for (i = 0; i < size_of_array; i++)     //Reading elements of the array according to the index till the size
    {
        scanf("%d", &array[i]);
    }
    find(array, size_of_array, b);
    printf("Output: ");
    for (i = 0; i < size_of_array; i++)    //Loop for final output
    {
        if (b[i]==0)
        {
            printf("%d ",i+1);
        }
    }
    return 0;
}

