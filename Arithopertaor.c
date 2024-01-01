#include<stdio.h>   

int main(){  
  int a = 5; 
  int b = 6;
   
   int sum = a+b;    // Addition
   printf("The sum of a and b is: %d\n",sum);   
     
  int subtract = a-b;    // subtraction
  printf("The subtraction of a and b is: %d\n", subtract);     

  int multiply = a*b;   // multiplicaton
  printf("The multiplicaton of a and b is: %d\n",multiply);

  int devide = a/b;     // division
  printf("The devide of a and b is : %d\n",devide);    

  int modulos = a%b;  // modulos , modulos operator not work on floating number in c 
  printf("the moduling of a and b is :%d\n", modulos);  

  printf("the increment of a is :%d\n", ++a);   

  printf("The decrement of b is : %d\n",--b);

    return 0;
} 