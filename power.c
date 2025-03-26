#include<stdio.h>
int power(int n,int e);

int main(){
int n,e;
printf("Enter the Base Number and the Exponent:");
scanf("%d%d",&n,&e);
printf("%d",power(n,e));
return 0;

}
int power(int n, int e){
if(e==0){
  return 1;
}
else{
  return n*power(n,e-1);
  
}
}
