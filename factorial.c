#include<stdio.h>
int main(){
 int number,factorial=1;
 printf("Enter a number");
 scanf("%d",&number);
 while(number>0){
  factorial=factorial*number;
  number=number-1;
 }
 printf("Factorial of the number is:%d",factorial);
 return 0;
}
