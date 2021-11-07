/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Anas
 */
#include <stdio.h>
int factorial (int n);
int main()
{
  int num;
  printf("Enter an positive integer: ");
  scanf("%d",&num);
  printf("Factorial of %d = ",num);
  printf("%d",factorial(num));
  return 0 ;
}
int factorial (int n)
{
  if (n>=1)
  return n*factorial(n-1);
  else
  return 1 ;
}
