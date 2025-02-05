#include<stdio.h>
int main(){
  int limit,i,shnum;
  printf("Enter the limit:")
  scanf("%d",&limit);
  int array [limit];
  for (i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  printf("Enter the number you want to search:");
  scanf("%d",&shnum);
  for(i=1;i<limit;i++){
    if(array[i]==shnum){
      printf("Key found at the position:%d",i+1);
    }
    else{
      printf("key not found")
    }
  }
  
  return 0;
}
