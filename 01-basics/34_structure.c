// #include<stdio.h>
// #include<string.h>
// struct employee
// {
//   int code;
//   float salary;
//   char name[20];
// };

// int main()
// {
//   struct employee e1;
//   e1.code = 100;
//   e1.salary = 40000.32;
//   strcpy(e1.name,"Remo");
//   printf("Code is %d\n",e1.code);
//   printf("Salary is %f\n",e1.salary);
//   printf("Name is %s\n",e1.name);
//   return 0;
// }

// #include<stdio.h>
// struct employee
// {
//   int code;
//   float salary;
//   char name[20];
// };


// int main()
// {
//   struct employee e1,e2,e3;
//   printf("Enter the code for e1 : ");
//   scanf("%d",&e1.code);
//   printf("Enter the salary for e1 : ");
//   scanf("%f",&e1.salary);
//   printf("Enter the name for e1 : ");
//   scanf("%s",e1.name);

//   printf("Enter the code for e2 : ");
//   scanf("%d",&e2.code);
//   printf("Enter the salary for e2 : ");
//   scanf("%f",&e2.salary);
//   printf("Enter the name for e2 : ");
//   scanf("%s",e2.name);

//   printf("Enter the code for e3 : ");
//   scanf("%d",&e3.code);
//   printf("Enter the salary for e3 : ");
//   scanf("%f",&e3.salary);
//   printf("Enter the name for e3 : ");
//   scanf("%s",e3.name);

//   printf("Code for e1 is %d\n",e1.code);
//   printf("salary for e1 is %f\n",e1.salary);
//   printf("Name for e1 is %s\n",e1.name);

//   printf("Code for e2 is %d\n",e2.code);
//   printf("salary for e2 is %f\n",e2.salary);
//   printf("Name for e2 is %s\n",e2.name);

//   printf("Code for e3 is %d\n",e3.code);
//   printf("salary for e3 is %f\n",e3.salary);
//   printf("Name for e3 is %s\n",e3.name);
//   return 0;
// }

#include<stdio.h>
#include<string.h>
typedef struct employee{
  int code;
  float salary;
  char name[20];
}emp;

int main()
{
  emp student[2];
  // student[0].code = 100;
  // student[0].salary = 42340.32;
  // strcpy(student[0].name,"Remo"); 
  // printf("Code is %d\n",student[0].code);
  // printf("Salary is %f\n",student[0].salary);
  // printf("Name is %s\n",student[0].name);

  for (int i = 0; i < 2; i++)
  {
    printf("Enter the code for student[%d] : ",i+1);
    scanf("%d",&student[i].code);

    printf("Enter the salary for student[%d] : ",i+1);
    scanf("%f",&student[i].salary);

    printf("Enter the name for student[%d] : ",i+1);
    scanf("%s",student[i].name);
  }

  for (int i = 0; i < 2; i++)
  {
    printf("Code for student[%d] is %d\n",i+1,student[i].code);
    printf("Salary for student[%d] is %f\n",i+1,student[i].salary);
    printf("Name for student[%d] is %s\n",i+1,student[i].name);
  }
  
  
  return 0;
}