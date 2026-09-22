#include <stdio.h>

int main() {
    int a[100][100], n, m;
    int i, j, k;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (k = 0; k < m; k++) {
        i = 0;
        j = k;

        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    for (k = 1; k < n; k++) {
        i = k;
        j = m - 1;

        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}