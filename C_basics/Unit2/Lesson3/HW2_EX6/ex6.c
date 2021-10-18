/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main ()
 {
   int i,x,Sum;
   Sum=0;
   printf("Enter an integer: ");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
     Sum += i;
   }
   printf("Sum = %d",Sum);
  return 0;
 }
