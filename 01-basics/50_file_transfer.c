#include<stdio.h>
int main()
{
  FILE *ptr1,*ptr2;
  char c;
  ptr1 = fopen("1.txt","r");
  ptr2 = fopen("2.txt","w");
  c = fgetc(ptr1);
  while(c != EOF){
    fputc(c,ptr2); // R e m o
    fputc(c,ptr2); // R e m o
    c = fgetc(ptr1); // e m o
  }
  fclose(ptr1);
  fclose(ptr2);
  return 0;
}