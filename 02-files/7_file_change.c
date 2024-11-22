#include <stdio.h>
int main()
{
  FILE *ptr;
  int num;
  ptr = fopen("7.txt", "r");
  fscanf(ptr, "%d", &num);
  ptr = fopen("7.txt", "w");
  fprintf(ptr, "%d", num * 2);
  fclose(ptr);
  return 0;
}