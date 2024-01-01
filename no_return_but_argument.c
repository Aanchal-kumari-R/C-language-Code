#include<stdio.h> 
   
   void sum(int x, int y);  
  
  int main(){ 
  int a,b; 
  printf("Enter the first number:"); 
  scanf("%d",&a);
 
  printf("Enter the second number:");  
  scanf("%d",&b);  

  sum(a,b);

    return 0;
  }  
  void sum(int x, int y){ 
    int z; 
    z= x+y;  
    printf("The sum of first and second number is : %d ",z);
  }
