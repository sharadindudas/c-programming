#include<stdio.h>
#include<string.h>
int main()
{
  char st[10] = "Remo";
  // char st2[10];
  char st2[10] = "Ez Gaming";
  // printf("Length of string is %d\n",strlen(st));
  // strcpy(st2,st);
  // printf("Copied string is %s\n",st2);
  strcat(st,st2);
  printf("String is %s\n",st);
  return 0;
}