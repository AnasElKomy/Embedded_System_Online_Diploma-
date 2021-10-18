/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main ()
 {
   float x,y,z;
   char a;
   printf("Enter operator either + or - or * or divide : ");
   scanf("%c",&a) ; //take operator from user
   printf("Enter two operands : ");
   scanf("%f%f",&x,&y); //take numbers from user
   switch (a)
   {
   case '+':
   {
     z=x+y;
     printf("%0.2f %c %0.2f = %0.2f",x,a,y,z);
   }
   break;
   case '-':
   {
     z=x-y;
     printf("%0.2f %c %0.2f = %0.2f",x,a,y,z);
   }
   break;
   case '*':
   {
     z=x*y;
     printf("%0.2f %c %0.2f = %0.2f",x,a,y,z);
   }
   break;
   case '/':
   {
     z=x/y;
     printf("%0.2f %c %0.2f = %0.2f",x,a,y,z);
   }
   break;
   default:
    printf("Error!!!!");
    break;
   }
 }
