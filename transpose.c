/******************************************************
 * File         :   transpose.c
 * Description  :   Create a C program to find the transpose of a matrix.
 * Author       :   Alex Roy
 * Date         :   07/02/2025
 * ***************************************************/
#include<stdio.h>
int main(){
  int row,column,i,j;
  printf("Enter the number of rows and columns: ");
  scanf("%d%d",&row,&column);
  printf("Enter the elements: ");
  int matrix[row][column];
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(i=0;i<column;i++){
    for(j=0;j<row;j++){
      printf("%d\t",matrix[j][i]);
    }
    printf("\n");
  }
  
  return 0;
  }
