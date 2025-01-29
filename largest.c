#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("Enter number 1:\n");
  printf("Enter number 2:\n");
  printf("Enter number 3:\n");
  scanf("%d%d%d",&num1,&num2,&num3);
 
 
if (num1>num2){
    if (num1>num3){
      printf("\n %d is the largest one",num1);
    }
    else{
      printf("\n %d is the largest one",num3);
    }
  }
else{
  if(num2>num3){
  printf("\n %d is the largest one",num2);
  }
  else{
  printf("\n %d is the largest one",num3);
  }
  
  }
  
    
  
  return 0;
}
    
