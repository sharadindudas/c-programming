#include<stdio.h>
void present(char *,char);
int main()
{
  char st[20] = "Sharadindu";
  char c = 'a';
  printf("Original string is %s\n",st);
  present(st,c);
  return 0;
}

void present(char *st,char c){
  char *ptr = st;
  while(*ptr != '\0'){
    if(*ptr == c){
      printf("Character present\n");
    }
    else{
      printf("Character not present\n");
    }
    ptr++;
  }
}