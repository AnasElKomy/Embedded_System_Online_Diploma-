/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main ()
 {
   float number;
   printf("Enter a number: ");
   scanf("%f",&number);
   if (number==0)
    printf("You entered zero.");
   else if (number > 0)
     printf("%0.2f is positive.",number);
   else
    printf("%0.2f is negative.",number);
   return 0;
 }
