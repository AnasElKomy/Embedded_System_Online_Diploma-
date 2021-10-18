/*
 * main.c
 *
 *  Created on: Oct18, 2021
 *      Author: Anas
 */
#include <stdio.h>
int main ()
{
  float a,b,temp ;
  printf("Enter value of a: ");
  scanf("%f",&a);
  printf("Enter value of b: ");
  scanf("%f",&b);
  temp = a ;
  a = b;
  b = temp;
  printf("After swapping value of a = %f \nAfter swapping value of b = %f",a,b);
  return 0;
}
