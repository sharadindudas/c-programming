#include<stdio.h>
int main()
{
  float c,f;
  printf("Enter the temp in Celcius : ");
  scanf("%f",&c);
  f = (c * 9/5) + 32;
  printf("Temp in Farenheit is %0.3fF\n",f);
  return 0;
}
