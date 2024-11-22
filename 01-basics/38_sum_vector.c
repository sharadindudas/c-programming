#include<stdio.h>
typedef struct vector
{
    int x,y;
}vec;

vec sumvector(vec,vec);

int main()
{
  vec v1,v2,sum;
  v1.x = 10;
  v1.y = 20;
  v2.x = 30;
  v2.y = 40;
  sum = sumvector(v1,v2);
  printf("X value is %d\n",sum.x);
  printf("Y value is %d\n",sum.y);
  return 0;
}

vec sumvector(vec v1,vec v2){
  vec result;
  result.x = v1.x + v2.x;
  result.y = v1.y + v2.y;
  return result;
}