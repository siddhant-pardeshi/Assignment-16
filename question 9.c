//Write a program in C to accept a matrix and determine whether it is a sparse matrix

#include<stdio.h>
int main()
{
int a[3][3]={0},i,j,count;

printf("Enter the elements of the matrix : \n");
      for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
         {
           scanf("%d",&a[i][j]);
         }
     }

     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
         {
            if(a[i][j] == 0)
            count++;
         }
     }

 if (count>4)
 printf("Given matrix is a sparse matrix\n");
 else
 printf("Given matrix is not a sparse matrix\n");

  for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
         {
           printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     return 0;
}
