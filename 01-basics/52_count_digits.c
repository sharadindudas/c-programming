#include<stdio.h>
int main()
{
  int n = 1234567,count = 0;
  while(n>0){
    n = n/10;
    count++;
  }
  printf("No of digits = %d\n",count);
  return 0;
}