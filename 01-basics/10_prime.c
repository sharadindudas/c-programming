#include<stdio.h>
int main()
{
  int n,isPrime = 1;
  printf("Enter a no : ");
  scanf("%d",&n);
  for (int i = 2; i < n; i++)
  {
    if(n%i == 0){
      isPrime = 0;
    }
  }
  
  if(isPrime == 0){
    printf("%d is not a prime number\n",n);
  }
  else{
    printf("%d is a prime number\n",n);
  }
  
  return 0;
}