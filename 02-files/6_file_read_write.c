#include<stdio.h>
int main()
{
  FILE *ptr1,*ptr2;
  char c;
  ptr1 = fopen("6.txt","r");
  ptr2 = fopen("6_1.txt","w");
  c = fgetc(ptr1);

  while(c != EOF){
    fputc(c,ptr2);
    fputc(c,ptr2);
    c = fgetc(ptr1);
  }
  fclose(ptr1);
  fclose(ptr2);
  return 0;
}