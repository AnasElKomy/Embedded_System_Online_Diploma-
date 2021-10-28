/*
 * main.c
 *
 *  Created on: Oct28, 2021
 *      Author: Anas
 */
 #include <stdio.h>
 int main()
 {
   int i,num,element;
   printf("Enter no of elements : ");
   scanf("%d",&num);
   int arr[num];
   for(i=0;i<num;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("Enter the element to be searched : ");
   scanf("%d",&element);
   for(i=0;i<num;i++)
   {
     if(element==arr[i])
     printf("Number found at the location = %d",i+1);
   }
   return 0 ;
 }
