/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main ()
 {
   int i , num , factorial ;
   factorial = 1;
   printf("Enter an integer: ");
   scanf("%d",&num);
   if (num>0)
   {
     for(i=num;i>0;i--)
     factorial *=i;
   }
   else if (num==0)
   {
     printf("Factorial = ",factorial);
   }
   else
   {
     printf("Error!!! Factorial of negative number doesn't exist");
   }
   printf("%d",factorial);
   return  0;
 }
