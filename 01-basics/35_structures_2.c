#include<stdio.h>
typedef struct employee
{
  int code;
  float salary;
}emp;

int main()
{
  emp e1;
  emp *ptr;
  ptr = &e1;
  e1.code = 100;
  e1.salary = 5000.50;

  printf("Code of e1 is %d\n",e1.code);
  printf("Code of e1 through ptr is %d\n",(*ptr).code);
  printf("Code of e1 through ptr another way is %d\n",ptr->code);
  return 0;
}