#include "assignment.h"


int main(void)
{
    //reverse array
    int arr[3] = {2, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    arrayReverse(arr, n);
    printf("Reversed array: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    //array summation
    int array_2[3] = {2, 5, 8};
    int n_2 = sizeof(array_2) / sizeof(array_2[0]);
    int sum = sumArray(array_2, n_2);
    printf("Sum of array elements: %d\n", sum);


    //get unique elements of an array
    int array_3[4] = {3, 2, 2, 5};
    int n_3 = sizeof(array_3) / sizeof(array_3[0]);
    getUniqueElements(array_3, n_3);

    //get maximum and minimum elements in an array
    int array_4[3] = {45, 25, 21};
    int n_4 = sizeof(array_4) / sizeof(array_4[0]);
    int minimum, maximum;

    findMinimumMaximum(array_4, n_4, &minimum, &maximum);
    printf("Minimum element is : %d\n", minimum);
    printf("Maximum element is : %d\n", maximum);


    //sort array in ascending order
    int array_5[5] = {2, 7, 4, 5, 9};
    int n_5 = sizeof(array_5) / sizeof(array_5[0]);
    sortArray(array_5, n_5);
    printf("Elements of array in sorted ascending order:: ");
    for (int i = 0; i < n_5; i++)
    {
        printf("%d ", array_5[i]);
    }





    //traverse array
    arrayTraverse();
    return 0;
}