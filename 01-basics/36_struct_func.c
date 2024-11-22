#include<stdio.h>
typedef struct employee
{
  int code;
  float salary;
}emp;

void display(emp);

int main()
{
  emp e1;
  e1.code = 100;
  display(e1); 
  return 0;
}

void display(emp e){
  printf("Code of e1 is %d\n",e.code);
}