#include<stdio.h>
int main()
{
  int n;
  printf("Enter the no : ");
  scanf("%d",&n);
  for (int i = 0; i < 10; i++)
  {
    printf("%d x %d = %d\n",n,i+1,n*(i+1));
  }
  
  return 0;
}