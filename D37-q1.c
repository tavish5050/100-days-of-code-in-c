/*Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main()
{
    int matrix[10][10], rowSum[10];
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}