#include<stdio.h>
#include<string.h>
int main()
{
  char st1[10];
  char st2[10];
  char c;
  int i = 0;
  printf("Enter the first string : ");
  scanf("%s",st1);
  printf("Enter the second string : ");

  while(c != '\n'){
    scanf("%c",&c);
    fflush(stdin);
    st2[i] = c;
    i++;
  }
  st2[i-1] = '\0';
  printf("First string is %s\n",st1);
  printf("Second string is %s\n",st2);
  printf("Compared value is %d\n",strcmp(st1,st2));

  return 0;
}