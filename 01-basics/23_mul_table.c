#include<stdio.h>
int main()
{
  int mul[3][10],n;
  printf("Enter a number : ");
  scanf("%d",&n);
  for (int i = 0; i < 10; i++)
  {
      mul[0][i] = n * (i+1);   
  }

  for (int i = 0; i < 10; i++)
  {
      printf("%d x %d = %d\n",n,i+1,mul[0][i]);  
  }
  

  return 0;
}