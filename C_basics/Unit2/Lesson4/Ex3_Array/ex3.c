/*
 * main.c
 *
 *  Created on: Oct28, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main()
 {
   int i,j;
   int r,c ;
   printf("Enter rows and column of matrix: ");
   scanf("%d %d",&r,&c);
   int a [r][c]; //matrix
   printf("Enter elemnts of matrix:\n"); //ask user to enter the elements
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       printf("Enter elemnts a%d%d: ",i+1,j+1);
       scanf("%d",&a[i][j]);
     }
   }
   printf("Entered Matrix:\n"); // make a in the matrix form
   for (i=0;i<r;i++)
   {
     for (j=0;j<c;j++)
     {
       printf("%d\t",a[i][j]);
     }
     printf("\n");
   }
   printf("Transpose of  Matrix:\n");
   for (i=0;i<c;i++) //transpose matrix
   {
     for (j=0;j<r;j++)
     {
       printf("%d\t",a[j][i]);
     }
     printf("\n");
   }
   return 0 ;
 }
