//Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int c[3][3],i,j;

printf("Matrix 1\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   printf("%d ",a[i][j]);
   }
   printf("\n");
}
printf("\n\n\n");

printf("Matrix 2\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   printf("%d ",b[i][j]);
   }
    printf("\n");
}
printf("\n\n\n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   c[i][j]=a[i][j] + b[i][j];
   }
}
printf("Sum of matrices each of order 3x3 is : \n");
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   printf("%d ",c[i][j]);
   }
    printf("\n");
}
return 0;
}
