#include<stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("5.txt","w");
  fputc('R',ptr);
  fputc('e',ptr);
  return 0;
}