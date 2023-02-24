//Write a program in C to find the row with maximum number of 1s

#include <stdio.h>

int main()
{
    int matrix[10][10], i, j, rows, columns, rowwithmaxones, maxonescount = -1, onescount;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        onescount = 0;

        for(j = 0; j < columns; j++)
        {
            if(matrix[i][j] == 1)
            {
                onescount++;
            }
        }

        if(onescount > maxonescount)
        {
            maxonescount = onescount;
            rowwithmaxones = i;
        }
    }

    printf("The row with maximum number of 1s is: %d\n", rowwithmaxones);

    return 0;
}
