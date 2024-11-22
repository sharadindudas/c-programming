// #include<stdio.h>
// int main()
// {
//   int arr[10] = {10,20,30,40,50};
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d\n",arr[i]); 
//   }
//   return 0;
// }

#include<stdio.h>
int main()
{
  int marks[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the marks of student[%d] : ",i+1);
    scanf("%d",&marks[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Marks of student[%d] is %d\n",i+1,marks[i]);
  }
  
  return 0;
}