#include<stdio.h>
int change(int *);
int main()
{
  int a = 10;
  printf("Before Changing value is %d\n",a);
  printf("Changed value is %d\n",change(&a));
  return 0;
}

int change(int *x){
  *x = *x * 10;
  return *x;
}