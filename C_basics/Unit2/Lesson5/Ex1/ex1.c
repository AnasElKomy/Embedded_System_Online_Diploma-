/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Anas
 */
#include <stdio.h>
int prime_num (int n); //declaration of function
int main()
{
  int n1,n2,x;
  int i = 0 ;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d",&n1,&n2);
  printf("Prime numbers between %d and %d are: ",n1,n2);
  for(i=n1+1;i<n2;++i) //for loop to extract the prime numbers between the two numbers
  {
    x = prime_num(i); //calling function
    if(x==0)
      printf("%d ",i);
  }
  return 0 ;
}
int prime_num(int n) //definition of function to check whether the number is prime or not
{
  int j,x = 0 ;
  for(j=2;j<=n/2;++j) //for loop to check if the number is prime
  {
    if(n%j==0)
    {
      x=1;
      break;
    }

  }
  return x;
}
