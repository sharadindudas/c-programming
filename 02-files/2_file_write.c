#include<stdio.h>
int main()
{
  FILE *ptr;
  int num;
  ptr = fopen("2.txt","w");
  printf("Enter a number : ");
  scanf("%d",&num);
  fprintf(ptr,"The Number entered by the user is %d\n",num);
  fclose(ptr);
  return 0;
}