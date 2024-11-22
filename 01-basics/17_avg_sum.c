#include<stdio.h>
void sumavg(int *,float *,int, int);
int main()
{
  int a = 10,b = 20, sum;
  float avg;
  sumavg(&sum,&avg,a,b);
  printf("Sum of a and b is %d\n",sum);
  printf("Average of a and b is %0.2f\n",avg);
  return 0;
}

void sumavg(int *sum,float *avg, int x,int y){
  *sum = x + y;
  *avg = (x+y) / 2;
}