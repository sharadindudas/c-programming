#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)calloc(6, sizeof(int));

  for (int i = 0; i < 6; i++)
  {
    printf("Enter the value of element[%d] : ",i+1);
    scanf("%d",&ptr[i]);
  }
  
  for (int i = 0; i < 6; i++)
  {
    printf("The value of element[%d] is %d\n",i+1,ptr[i]);
  }
  free(ptr);
  return 0;
}