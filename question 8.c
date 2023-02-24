//Write a program in C to print or display an upper triangular matrix.

#include <stdio.h>
int main()
{
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

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


for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
   if(j<i)
    c[i][j]=0;
   else
    c[i][j]=a[i][j];
   }
}
printf("lower triangular matrix is : \n");
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
