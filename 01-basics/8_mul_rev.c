#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no : ");
  scanf("%d",&n);
  for (int i = 10; i ; i--)
  {
    printf("%d x %d = %d\n",n,i,n*i);
  }
  
  return 0;
}