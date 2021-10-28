/*
 * main.c
 *
 *  Created on: Oct28, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main()
 {
   int i,num,element,location;
   printf("Enter no of elements : ");
   scanf("%d",&num);
   int arr[num];
   for(i=0;i<num;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("Enter the element to be inserted : ");
   scanf("%d",&element);
   printf("Enter the location : ");
   scanf("%d",&location);
   for(i=num;i>=location;i--)
   {
     arr[i] = arr[i-1];
   }
   arr[location-1] = element;
   for(i=0;i<=num;i++)
   {
     printf("%d ",arr[i]);
   }
   return 0 ;
 }
