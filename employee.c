#include<stdio.h>
typedef struct {
  char name[20];
  int id;
  int salary;
  } employee;
  
  int main(){
  int n;
  printf("enter the number of employees:");
  scanf("%d",&n);
    employee e[n];
    for(int i=0;i<n;i++){
      printf("enter the employee name:");
      scanf("%s",&e[i].name);
      printf("enter the id:");
      scanf("%d",&e[i].id);
      printf("enter the salary:");
      scanf("%d",&e[i].salary);
      }
  printf("\n Employee Details:\n");
      for (int i=0;i<n;i++){
      printf("\n employee name:%s",e[i].name);
      printf("\n id:%d",e[i].id);
      printf("\n salary:%d",e[i].salary);
      }
      return 0;
  }

