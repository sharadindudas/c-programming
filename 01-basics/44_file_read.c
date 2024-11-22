#include<stdio.h>
int main()
{
  FILE *ptr; 
  int num1,num2;
  ptr = fopen("read.txt","r");
  if(ptr == NULL){
    printf("File does not exist\n");
  }
  else{
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The Numbers are %d and %d\n",num1,num2);
  }
  return 0;
}