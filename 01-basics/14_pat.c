#include<stdio.h>
void pattern(int);
int main()
{
  pattern(3);
  return 0;
}

void pattern(int n){
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2*i-1; j++)
    {
        printf("*");
    }
    printf("\n");
  }
  
}