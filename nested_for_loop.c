#include<stdio.h>  

int main(){ 
  int i,j;  
  for(i=0;i<=5; i++){ 
    printf("outer is : %d\n",i);  
  for(j=1;j<=10; j++){ 
    printf("inner is %d\n",j);
  }
  }   
      return 0;  
}