#include<stdio.h>
int main()
{
  int rem,sum=0,n;
  printf("Enter the number : ");
  scanf("%d",&n);
  for (int i = 1; i < n; i++)
  {
    rem = n % i;
    if(rem == 0){
      sum = sum + i;
    }
  }
  
  if(sum == n){
    printf("%d is a perfect number\n",n);
  }
  else{
    printf("%d is not a perfect number\n",n);
  }
  return 0;
}