#include<stdio.h>
void reverse(int *,int n);
void display(int *,int n);
int main()
{
  int arr[5] = {10,20,30,40,50};
  display(arr,5);
  reverse(arr,5);
  display(arr,5);
  return 0;
}

void display(int arr[],int n){
  printf("Elements of an array are : \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d\t",arr[i]);
  }
  printf("\n");
}

void reverse(int arr[],int n){
  int temp;
  for (int i = 0; i < n/2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
}