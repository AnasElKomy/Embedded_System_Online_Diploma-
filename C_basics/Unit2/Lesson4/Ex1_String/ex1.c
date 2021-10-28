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
   int i,n;
   char str[100];
   char chr;
   printf("Enter a string:  ");
   gets(str);
   printf("Enter a character to find frequency: ");
   scanf("%c",&chr);
   for(i=0,n=0;i<strlen(str);i++)
   {
     if(str[i]==chr)
     ++n;
   }
   printf("Frequency of %c = %d ",chr,n);
   return 0 ;
 }
