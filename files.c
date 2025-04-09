#include<stdio.h>
void readFile(FILE *fp){
  int num;
  while(fscanf(fp,"%d",&num)==1){
    printf("%d",num);  
  }
}
   
  
int main(){
  FILE *fp1,*fp2,*fp3;
  
  fp1=fopen("file.txt","r");
  fp2=fopen("odd.txt","w");
  fp3=fopen("even.txt","w");
  int num;
  
  while(fscanf(fp1,"%d",&num)==1){
    if (num%2==0){
      fprintf(fp3,"%d\t",num);
    }else{
      fprintf(fp2,"%d\t",num);
    
    }
  }
  
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  printf("\n The input text file contents:");
  fp1=fopen("file.txt","r");
  readFile(fp1);
  printf("\n The odd number text file contents:");
  fp2=fopen("odd.txt","w");
  readFile(fp2);
  printf("\n The even number text file contents:");
  fp3=fopen("even.txt","w");
  readFile(fp3);
  return 0;
}
