#include<stdio.h>
int main()
{
  int n,temp,rev = 0,rem;
  printf("Enter a number : ");
  scanf("%d",&n);
  temp = n;
  while(n>0){
    rem = n % 10;
    rev = (rev * 10) + rem;
    n = n/10;
  }
  printf("%d is reversed\n",rev);
  return 0;
}