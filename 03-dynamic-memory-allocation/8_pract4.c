#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  ptr = (int *)malloc(10 * sizeof(int));

  for (int i = 0; i < 10; i++)
  {
    printf("%d x %d = %d\n",n,i+1,n*(i+1));
  }
  printf("\n\n");
  ptr = realloc(ptr,15 * sizeof(int));

  for (int i = 0; i < 15; i++)
  {
    printf("%d x %d = %d\n",n,i+1,n*(i+1));
  }
  return 0;
}