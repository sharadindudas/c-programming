#include<stdio.h>
int main()
{
  FILE *ptr;
  int num = 50;
  ptr = fopen("write.txt","w");
  fprintf(ptr,"The Number is %d",num);
  fclose(ptr);
  return 0;
}