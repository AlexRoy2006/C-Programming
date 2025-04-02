#include<stdio.h>
struct student{
  int rollno;
  char name[20];
  float cgpa;
  };
int main(){
struct student s1;
printf("\n enter the roll no:");
scanf("%d",&s1.rollno);
getchar();
printf("\n enter the name:");
fgets(s1.name, 20,stdin);
printf("\n enter the CGPA:");
scanf("%f",&s1.cgpa);
printf("\n Student Details:\n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Name: %s \n", s1.name);
    printf("CGPA: %.2f \n", s1.cgpa);

return 0;
}
