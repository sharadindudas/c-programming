#include<stdio.h>
int main()
{
  FILE *ptr;
  char c;
  ptr = fopen("readchar.txt","r");
  printf("%c",fgetc(ptr));
  printf("%c",fgetc(ptr));
  printf("%c",fgetc(ptr));
  printf("%c",fgetc(ptr));
  printf("%c",fgetc(ptr));
  fclose(ptr);
  return 0;
}