#include<stdio.h>  

 void dowork(int a , int b, int *sum, int *product, int *average);

int main(){ 

   int a = 2; int b = 2;  
   int sum; int product; int average;
    dowork(a,b,&sum, &product, &average); 
                                                   // write a function to calculate the sum, product, and average of 2  
    printf("sum = %d:, product = %d:, average = %d:", sum , product, average);    // numbers.Print that avreage in the main function.

    return 0;
}  
  void dowork(int a , int b, int *sum, int *product,int *average){ 

      *sum = a+b;  
      *product = a*b;  
      *average = (a+b)/2; 
     
  }  






