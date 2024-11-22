#include<stdio.h>
int nat(int);
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  printf("Sum of %d natural nos are %d\n",n,nat(n));
  return 0;
}

int nat(int n){
  if(n==1){
    return 1;
  }
  else{
    return nat(n-1) + n;
  }
}