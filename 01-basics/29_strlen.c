#include<stdio.h>
void STRLEN(char *);
int main()
{
  char st[10] = "Remo";
  STRLEN(st);
  return 0;
}

void STRLEN(char st[]){
  char *ptr = st;
  int count = 0;
  while(*ptr != '\0'){
    count++;
    ptr++;
  }
  printf("Length of the string is %d\n",count);
}