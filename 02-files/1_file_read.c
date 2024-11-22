#include<stdio.h>
int main()
{
  FILE *ptr;
  int a,b;
  ptr = fopen("1.txt","r");
  fscanf(ptr,"%d",&a);
  fscanf(ptr,"%d",&b);
  fclose(ptr);
  printf("The numbers are %d and %d\n",a,b);
  return 0;
}