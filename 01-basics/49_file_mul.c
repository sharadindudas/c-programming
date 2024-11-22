#include<stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("table.txt","w");
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  for (int i = 1; i <= 10; i++)
  {
    fprintf(ptr, "%d x %d = %d\n",num,i,num*i);
  }
  fclose(ptr);
  return 0;
}