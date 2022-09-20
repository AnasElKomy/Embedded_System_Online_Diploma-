/*
 * main.c
 *
 *  Created on: Sep14, 2022
 *      Author: Anas
 */

#include <stdio.h>
struct Sperson
{
  unsigned char name[50];
  unsigned int ID;
};
int main()
{
  struct Sperson e1={"Alex",1002}, e2={"Anas",2804}, e3={"Ali",2304};
  struct Sperson* arr[]= {&e1,&e2,&e3};
  struct Sperson *(*ptr)[3] = &arr;
  for(int i=0; i<3; i++)
  {
    printf("Employee Name = %s\n",(*(*ptr+i))->name);
    printf("Employee ID = %d\n",(*(*ptr+i))->ID);

  }



  return 0;
}
