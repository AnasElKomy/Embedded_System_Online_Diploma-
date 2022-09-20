/*
 * main.c
 *
 *  Created on: Sep14, 2022
 *      Author: Anas
 */

#include <stdio.h>
int main()
{
  char alpha[26];
  char* p = alpha;
  for(int i=0; i<26; i++)
  {
    *p = i+'A';
    p++;
  }
  p = alpha;
  printf("The Alphabets are :\n");
  printf("Expected Output :\n");
  for(int i=0; i<27; i++)
  {
    printf("%c  ",*p);
    p++;
  }





  return 0;
}
