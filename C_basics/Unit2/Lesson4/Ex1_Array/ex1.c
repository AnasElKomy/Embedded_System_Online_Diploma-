/*
 * main.c
 *
 *  Created on: Oct27, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main()
 {
   float a [2][2] , b [2][2] , sum[2][2];
   int i,j ;
   //ask user to enter the elements of first matrix
   printf("Enter the element of 1st matrix\n");
   for (i=0;i<2;i++)
   {
     for (j=0;j<2;j++)
     {
       printf("Enter a%d%d: ",i+1,j+1);
       scanf("%f",&a[i][j]);
     }
   }
   //ask user to enter the elements of second matrix
   printf("Enter the element of 2nd matrix\n");
   for (i=0;i<2;i++)
   {
     for (j=0;j<2;j++)
     {
       printf("Enter b%d%d: ",i+1,j+1);
       scanf("%f",&b[i][j]);
     }
   }
   //sum of the matrix
   for (i=0;i<2;i++)
   {
     for (j=0;j<2;j++)
     {
       sum[i][j] = a[i][j] + b[i][j];
     }
   }
   //make the sum printed in the form of matrix
   printf("Sum of Matrix:\n");
   for (i=0;i<2;i++)
   {
     for (j=0;j<2;j++)
     {
       printf("%2.1f\t",sum[i][j]);
     }
     printf("\n");
   }
return 0 ;
 }
