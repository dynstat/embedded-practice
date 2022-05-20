#include <stdio.h>
#include <conio.h>
int main()
{
    // declare local variables
    int arr[10] = {1, 2, 3, 4, 6, 4, 3, 2, 0, 9}, i, j, k, size = 10;

    // use nested for loop to find the duplicate elements in array
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            // to check duplicate element
            if (arr[i] == arr[j])
            {
                // delete the current position of the duplicate element
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                // decrease the size of array after removing duplicate element
                size--;

                // if the position of the elements is changes, don't increase the index j
                j--;
            }
        }
    }

    /* display an array after deletion or removing of the duplicate elements */
    printf(" \n Array elements after deletion of the duplicate elements: ");

    // for loop to print the array
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}