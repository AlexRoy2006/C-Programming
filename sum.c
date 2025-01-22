#include<stdio.h>

int main(){
  float number1,number2,sum;
  printf("\n Enter two floating numbers");
  scanf("%f%f",&number1,&number2);
  sum=number1+number2;
  printf("%f+%f=%f\n",number1,number2,sum);
  
  return 0;
}
