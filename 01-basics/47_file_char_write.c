#include<stdio.h>
int main()
{
  FILE *ptr;
  ptr = fopen("writechar.txt","w");
  fputc('H',ptr);
  fputc('e',ptr);
  fputc('l',ptr);
  fputc('l',ptr);
  fputc('o',ptr);
  fputc('o',ptr);
  fputc('o',ptr);
  fputc('o',ptr);
  fclose(ptr);
  return 0;
}