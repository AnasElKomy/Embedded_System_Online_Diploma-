/*
 * main.c
 *
 *  Created on: Oct28, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main()
 {
   int i , n ;
   printf("Enter the numbers of data: ");
   scanf("%d",&n);
   float arr [n] , sum;
   for(i=0;i<n;i++)
   {
     printf("%d. Enter number: ",i+1);
     scanf("%f",&arr[i]);
     sum += arr[i];
   }
   printf("Average = %0.2f",sum/n);
   return 0 ;
 }
