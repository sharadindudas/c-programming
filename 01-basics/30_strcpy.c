#include<stdio.h>
char * STRCPY(char *,char *);
int main()
{
  char src[10] = "Remo";
  char tar[10];
  STRCPY(tar,src);
  printf("Copied string is %s\n",tar);
  return 0;
}

char * STRCPY(char *tar,char *src){
  char *ptr = tar;
  while(*src != '\0'){
    *ptr = *src;
    ptr++;
    src++;
  }
  *ptr = '\0';
  return ptr;
}