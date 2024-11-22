#include<stdio.h>
typedef struct complex
{
  int real,img;
}comp;

void display(comp);

int main()
{
  comp cnum[2];
  for (int i = 0; i < 2; i++)
  {
    printf("Enter the real value of num[%d] : ",i+1);
    scanf("%d",&cnum[i].real);

    printf("Enter the img value of num[%d] : ",i+1);
    scanf("%d",&cnum[i].img);
  }
  
  for (int i = 0; i < 2; i++)
  {
    display(cnum[i]);
  }
  
  return 0;
}

void display(comp c){
    printf("Real value of is %d\n",c.real);
    printf("Image value of is %d\n",c.img);
}