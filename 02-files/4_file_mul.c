#include<stdio.h>
int main()
{
  FILE *ptr;
  int n;
  ptr = fopen("4.txt","w");
  printf("Enter a number : ");
  scanf("%d",&n);
  fprintf(ptr,"****** Multiplication Table of %d is ******\n",n);
  for (int i = 0; i < 10; i++)
  {
    fprintf(ptr,"%d x %d = %d\n",n,i+1,n*(i+1));
  }
  fclose(ptr);
  return 0;
}