#include<stdio.h>
void encrypt(char *);
void decrypt(char *);
int main()
{
  char st[10] = "Remo";
  encrypt(st);
  printf("Encrypted string is %s\n",st);
  decrypt(st);
  printf("Decrypted string is %s\n",st);
  return 0;
}

void encrypt(char *st){
  char *ptr = st;
  while(*ptr != '\0'){
    *ptr = *ptr + 30;
    ptr++;
  }
}

void decrypt(char *st){
  char *ptr = st;
  while(*ptr != '\0'){
    *ptr = *ptr - 30;
    ptr++;
  }
}

