#include<stdio.h>
int main(){
  int limit,i,j,temp;
  printf("Enter the limit:");
  scanf("%d",&limit);
  int array [limit];
  for (i=0;i<limit;i++){
    printf("Enter the %d Elements:\n",limit);
    scanf("%d",&array[i]);
  }
  for(int i=0; limit-1;i++){
    for(int j=0;j<limit-i;j++);{
      if (array[j]>array[j+1]){
        temp=array[j+1];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }

  }
  printf("\nSorted array: ");
  for (i=0;i<limit;i++){
  printf("%d",array[i]);
  }
  
   
  return 0;
}
