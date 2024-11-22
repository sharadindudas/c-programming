/* 0  1  1  2  3  5
t1 = 0
t2 = 1
nextT = t1 + t2
*/

#include<stdio.h>
int main()
{
  int t1 = 0,t2 = 1,nextTerm,n;
  nextTerm = t1 + t2;
  printf("Enter the no of Term : ");
  scanf("%d",&n);
  printf("Fibonacci series : %d, %d, ",t1,t2);
  for (int i = 2; i < n; i++)
  {
    printf("%d, ",nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  
  return 0;
}