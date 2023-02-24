//Write a program in C to find the sum of rows and columns of a Matrix

#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n\n");
    }

    int rowsum, colsum;
    printf("Row sums:\n");
    for (i = 0; i < m; i++)
    {
        rowsum = 0;
        for (j = 0; j < n; j++)
        {
            rowsum = rowsum + matrix[i][j];
        }
        printf("%d\n", rowsum);
    }

    printf("Column sums:\n");
    for (j = 0; j < n; j++)
    {
        colsum = 0;
        for (i = 0; i < m; i++)
        {
            colsum =colsum + matrix[i][j];
        }
        printf("%d\n", colsum);
    }

    return 0;
}
