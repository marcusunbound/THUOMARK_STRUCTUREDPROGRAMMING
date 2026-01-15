#include "assignment.h"
void arrayTraverse()
{
    int array_2d[6][4] = {
        {20, 9, 182, 139}, // Row 0
        {40, 12, 232, 253}, // Row 1
        {50, 22, 342, 343}, // Row 2
        {60, 34, 462, 433}, // Row 3
        {70, 41, 532, 523}, // Row 4
        {80, 51, 622, 613}  // Row 5
    };

    printf("\n\nTraversing the 2D array:\n");

    // Outer loop for rows
    for (int i = 0; i < 6; i++) {
        // Inner loop for columns
        for (int j = 0; j < 4; j++) {
            // Accessing element at row i, column j
            printf("%d\t", array_2d[i][j]);
        }
        // New line after each row
        printf("\n");
    }
}