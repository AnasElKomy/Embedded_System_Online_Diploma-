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
   printf("Enter three numbers: ");
   scanf("%f%f%f",&x,&y,&z);
   if(x>y)
   {
     if (x>z)
      printf("Largest number = %0.3f\n",x);
    else
      printf("Largest number = %0.3f\n",z);
   }
   else
   {
     if (y>z)
      printf("Largest number = %0.3f\n",y);
    else
      printf("Largest number = %0.3f\n",z);
   }
   return 0;
 }
