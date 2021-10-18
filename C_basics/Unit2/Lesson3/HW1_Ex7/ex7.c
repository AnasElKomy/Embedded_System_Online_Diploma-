/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
#include <stdio.h>
int main ()
{
  float a,b;
  printf("Enter value of a: ");
  scanf("%f",&a);
  printf("Enter value of b: ");
  scanf("%f",&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("After swapping value of a = %0.2f \nAfter swapping value of b = %0.2f",a,b);
  return 0;
}
