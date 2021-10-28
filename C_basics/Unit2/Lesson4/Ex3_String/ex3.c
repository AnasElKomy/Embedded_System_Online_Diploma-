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
   int i,j;
   char str[100],a[100];
   printf("Enter the string  : ");
   gets(str);
   for (i=strlen(str)-1,j=0;i<=0,j<strlen(str);i--,j++)
   a[j]=str[i];
  printf("Reverse string is : %s",a);
  return 0 ;
}
