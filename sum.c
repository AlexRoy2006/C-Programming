/*program to calculate the sum of array elements by passing the array to a function.
Display the sum in the main function.*/
#include<stdio.h>
int sum(int arr[],int limit){
  int sum=0;
  for(int i=0;i<limit;i++){
    sum = sum + arr[i];
  }
  return sum;


}

int main(){
int limit;
printf("Enter the limit:");
scanf("%d",&limit);
int arr[limit];
printf("\n Enter the array of elements:");
for(int i=0;i<limit;i++){
  
    scanf("%d",&arr[i]);
  
}
printf("Sum of the Array is:%d ",sum(arr,limit));
return 0;
}

