#include<stdio.h>
int main()
{
  int radC,areaC;
  printf("Enter the radius of the circle : ");
  scanf("%d",&radC);
  areaC = 3.14 * radC * radC;
  printf("Area of a circle is %d\n",areaC);
  return 0;
}