// #include<stdio.h>
// int main()
// {
//   char st[10] = "Remo";
//   printf("%s",st);
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//   char st[10] = "Remo";
//   char *ptr = st;
//   while(*ptr != '\0'){
//     printf("%c",*(ptr++));
//   }
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//   char st[10];
//   printf("Enter your Name : ");
//   scanf("%s",st);
//   printf("Name is %s\n",st);
//   return 0;
// }

#include<stdio.h>
int main()
{
  char st[10];
  printf("Enter your Name : ");
  gets(st);
  printf("Name is ");
  puts(st);
  return 0;
}