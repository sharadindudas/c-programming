#include<stdio.h>
void occurance(char *,char);
int main()
{
  char st[20] = "Sharadindu";
  char c = 'a';
  occurance(st,c);
  return 0;
}

void occurance(char *st,char c){
  char *ptr = st;
  int count = 0;
  while(*ptr != '\0'){
    if(*ptr == c){
      count++;
    }
    ptr++;
  }
  printf("Occurance of %c character is %d\n",c,count);
}