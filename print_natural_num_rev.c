#include<stdio.h>   
 
 int main(){ 
  int n ; 
  printf("Enter any number:");  
  scanf("%d",&n);    

  int sum = 0; 
  
  for(int i=n; i>=1;i--){ 
    printf("%d\n",i);  
    sum= sum+i;
  }  
  printf("The sum is : %d", sum);
    return 0; 
 }
