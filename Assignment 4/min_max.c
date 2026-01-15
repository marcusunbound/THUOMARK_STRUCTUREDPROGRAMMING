#include "assignment.h"

void findMinimumMaximum(int *arr, int size, int *min, int *max) {

    printf("Finding min and max\n");
    printf("The original array is:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
