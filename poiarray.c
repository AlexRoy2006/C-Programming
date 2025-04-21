#include<stdio.h>
int main(){
  int array[]= {1,2,3,4,5};
  int* aptr = array;
  for(int i=0;i<5;i++){
    printf("%d\t",*(array+i));
  }
  return 0;

}
