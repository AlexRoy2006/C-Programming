/*
Write a C program that acts as a simple calculator. The program should take two numbers and an operator (+, -, *, /, %) as input and perform the corresponding operation using a switch statement. If the operator is invalid, display an error message.
Detailed Steps:

    1. Prompt the user to enter two numbers.
    2. Ask the user to choose an operator (+, -, *, /, %).
    3. Use a switch statement to handle the operator and perform the calculation.
    4. Display the result of the operation.
    5. Handle invalid operators using the default case.
*/

#include<stdio.h>
int main(){ 
  int num1,num2,sum,difference,multiplication,division,modulus;
  char operator;
  printf("Enter Number 1:");
  scanf("%d",&num1);
  printf("Enter Number 2:");
  scanf("%d",&num2);
  printf("What Operation do you want to do (+, -, *, /, %%)");
  scanf(" %c", &operator);
  switch(operator){
    case '+':
      sum=num1+num2;
      printf("%d\n",sum);
      break;
    case '-':
      difference=num1-num2;
      printf("%d\n",difference);
      break;
    case '*':
      multiplication=num1*num2;
      printf("%d\n",multiplication);
      break;
    case '/':
      division=num1/num2;
      printf("%d\n",division);
      break;
    case '%':
      modulus=num1%num2;
      printf("%d\n",modulus);
      break;
    default:
      printf("Enter a valid operator");
  }
    return 0;
}
