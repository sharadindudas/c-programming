#include <stdio.h>
int main()
{
  int n, sum = 0, rem, temp;
  printf("Enter the Number : ");
  scanf("%d", &n);
  temp = n;
  while (n > 0)
  {
    rem = n % 10;
    sum = sum + (rem * rem * rem);
    n = n/10;
  }
  if(temp == sum){
    printf("%d is an Armstrong Number\n",temp);
  }
  else{
    printf("%d is not an Armstrong Number\n",temp);
  }
  return 0;
}