#include "assignment.h"

void arrayReverse(int array[], int n)
{

    printf("The Original array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = array[l];
        array[l] = array[r];
        array[r] = temp;
        l++;
        r--;
    }
}