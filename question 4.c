//Write a program in C to find the sum of right diagonals of a matrix.

#include <stdio.h>
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

int c[3][3],i,j,sum=0;

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


for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
     if (i==j)
     sum = a[i][j] + sum;

   }
}
 printf("sum of right diagonnal is: \n");

   printf("%d ",sum);


return 0;
}

