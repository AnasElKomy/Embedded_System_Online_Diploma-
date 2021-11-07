/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Anas
 */
#include <stdio.h>
#include <string.h>
void reverse (char arr[],int n);
int main ()
{
  char arr[100];
  printf("Enter a sentence: ");
  gets(arr);
  reverse (arr,strlen(arr));
  return 0 ;
}
void reverse (char arr[],int n)
{
  if(n==0)
    return;
  printf("%c",arr[--n]);
  reverse(arr,n);

}
