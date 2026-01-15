#include "assignment.h"
void getUniqueElements(int array[], int n)
{


    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; i++)
    {
        int isUnique = 1;
        for( int j = 0; j < n; j++)
        {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", array[i]);
        }

    }
    printf("\n");

}