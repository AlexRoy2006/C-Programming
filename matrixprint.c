#include<stdio.h>
int main(){
  int row,column,sum=0,i,j;
  printf("Enter the number of rows and column:");
  scanf("%d%d",&row,&column);
  int matrix[row][column];
  printf("Enter the elements:");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
 
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
