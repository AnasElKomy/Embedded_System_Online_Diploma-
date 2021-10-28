/*
 * main.c
 *
 *  Created on: Oct28, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 #include <string.h>
 int main()
 {
   int i;
   char str[100];
   printf("Enter a string: ");
   gets(str);
   for(i=0;i<100;i++)
   {
     if (str[i]=='\0')
     break;
   }
   printf("Length of string: %d",i);
   return 0 ;
 }
