#include <stdio.h>
void posNeg(int *, int);
void display(int *, int);
int main()
{
  int arr[5] = {10, 20, -30, -40, 50};
  display(arr, 5);
  posNeg(arr, 5);
  return 0;
}

void posNeg(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      printf("Positive element is %d\n", arr[i]);
    }
    else if (arr[i] < 0)
    {
      printf("Negative element is %d\n", arr[i]);
    }
  }
}

void display(int arr[], int n)
{
  printf("Elements of array is \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  printf("\n");
}