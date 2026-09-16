/*Find the transpose of a matrix. */
#include <stdio.h>

int main()
{
    int matrix[10][10], transpose[10][10];
    int rows, columns, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");

    for(i = 0; i < columns; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}