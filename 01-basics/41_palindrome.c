#include<stdio.h>
int main()
{
  int n,sum = 0,rem,temp;
  printf("Enter a number : ");
  scanf("%d",&n);
  temp = n;
  while(n > 0){
    rem = n % 10;
    sum = (sum * 10) + rem;
    n = n/10;
  }
  if(temp == sum){
    printf("%d is a palindrome Number\n",temp);
  }
  else{
    printf("%d is not a palindrome Number\n",temp);
  }
  return 0;
}