#include<stdio.h>  

int main(){  
 int x,y;   
 printf("Enter the first number:\n");  
 scanf("%d", &x );  
  printf("Enter the second number:\n");  
  scanf("%d", &y );  
 if(x>y){ 
    printf("the smallest number is : %d",y);
 }
  else{ 
    printf("The smallest number is :%d",x);
  }


    return 0;
}