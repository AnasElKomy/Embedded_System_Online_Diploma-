/*
 * main.c
 *
 *  Created on: Sep14, 2022
 *      Author: Anas
 */

#include <stdio.h>
#include <string.h>
int main()
{
  int i;
  char str[50];
  char *ptr ;
  ptr = str;
  printf("Input a string: ");
  gets(str);
  printf("The string :  ");
  for (i=0; i<strlen(str); i++)
  {
    printf("%c",*(ptr+i));

  }
  printf("\n");
  printf("Reverse of the string: ");
  for (i=strlen(str); i>=0; i--)
  {
    printf("%c",*(ptr+i));
    
  }


  return 0;
}
