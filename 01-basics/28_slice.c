#include<stdio.h>
void slice(char *,int,int);
int main()
{
  char st[] = "Sharadindu";
  int m = 0, n = 3;
  slice(st,m,n);
  printf("Sliced string is %s\n",st);
  return 0;
}

void slice(char *st,int m,int n){
  int i = 0;
  while(m+i<n){
    st[i] = st[m+i];
    i++;
  }
  st[i] = '\0';
}