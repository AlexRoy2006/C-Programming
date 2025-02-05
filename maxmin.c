#include<stdio.h>
int main(){
  int limit,i,shnum,maximum,minimum,max,min;
  printf("Enter the limit:");
  scanf("%d",&limit);
  int array [limit];
  for (i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  maximum=array[0];
  minimum=array[0];
  for(i=1;i<limit;i++){
    if(array[i]>maximum){
      maximum=array[i];
      max=i;
    }
    if(array[i]<minimum){
      minimum=array[i];
      min=i;
    }
  }
  printf("Maximum Number:%d and index=%d",maximum,max+1);
  printf("Minimum Number:%d and index=%d",minimum,min+1);
  return 0;
}
