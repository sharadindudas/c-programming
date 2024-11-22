#include<stdio.h>
int fib(int);
int main()
{
  int n;
  printf("Enter a no : ");
  scanf("%d",&n);
  printf("The Element in %d position is %d\n",n,fib(n));
  return 0;
}

int fib(int n){
  if(n==0 || n==1){
    return n;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}