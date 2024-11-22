#include<stdio.h>
void swap(int *,int *);
int main()
{
  int a=10,b=20;
  printf("Before swapping, A : %d and B = %d\n",a,b);
  swap(&a,&b);
  printf("After swapping, A : %d and B = %d\n",a,b);
  return 0;
}

void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

