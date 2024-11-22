#include<stdio.h>
void display(int []);
int main()
{
  int arr[2][2][2] = {10,20,30,40,50};
  display(arr);
  return 0;
}

void display(int * ptr){
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      for (int k = 0; k < 2; k++)
      {
          printf("%u\n",*(ptr++));
      }
      
    }
    
  }
}