#include <stdio.h>
void display(int arr[]);
int main()
{
  int arr[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Enter the value of arr[%d][%d] : ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  display(arr);
  return 0;
}

void display(int *ptr){
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("The value of arr[%d][%d] is %d\n", i + 1, j + 1,*(ptr++));
    }
  }
}
