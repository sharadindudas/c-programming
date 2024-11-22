#include<stdio.h>
typedef struct vector
{
  int x,y;
}vec;

int main()
{
  vec v1,v2;
  v1.x = 10;
  v1.y = 20;

  printf("v1 => x : %d and y : %d\n",v1.x,v1.y);
  v2.x = 100;
  v2.y = 200;

  printf("v2 => x : %d and y : %d\n",v2.x,v2.y);

  return 0;
}