/******************************************************
 * File         :   matrixaddition.c
 * Description  :   Create a function in C program to add two matrix
 * Author       :   Alex Roy
 * Date         :   07/02/2025
 * ***************************************************/

#include<stdio.h>
int main(){
  int row,column,sum=0,i,j;
  printf("Enter the number of rows and column of matrix 1:");
  scanf("%d%d",&row,&column);
  int matrix1[row][column],matrix2[row][column];
  printf("Enter the elements:");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
 
  
  printf("Enter the elements of matrix2:");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&matrix2[i][j]);
    }
  }
  int matrix3[row][column];
   for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }
   }
   for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
