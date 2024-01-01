#include<stdio.h>   
int main(){  
  int a; 
  int b; 
  printf("Enter your first number:");  
  scanf("%d",&a);   
  printf("Enter your second number :"); 
  scanf("%d",&b);
  int sum = a+b; 
  printf("The sum of a and b is :%d",sum);
    return 0;
}