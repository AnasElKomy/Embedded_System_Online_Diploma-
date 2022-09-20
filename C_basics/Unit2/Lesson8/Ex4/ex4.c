/*
 * main.c
 *
 *  Created on: Sep14, 2022
 *      Author: Anas
 */

#include <stdio.h>
int main()
{
  int arr[15];
  int n ;
  int i;
  int* ptr = NULL;
  printf("Input the number of elements to store in the array (max 15): ");
  scanf("%d",&n);
  printf("Input %d number of elements in the array :\n",n);
  for (i=0; i<n; i++)
  {
    printf("element - %d : ",i);
    scanf("%d",&arr[i]);
  }
  ptr=arr;
  printf("The elements of array in reverse order are :\n");
  for (i=n-1; i>=0; i--)
  {
      printf("element - %d : %d\n",i,*(ptr+i));
  }
  return 0 ;
}
