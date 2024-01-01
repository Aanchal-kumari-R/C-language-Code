#include<stdio.h>  
#include<math.h>  
  double findSQRT(int N);
 int main(){ 
 
 int N ; 
 printf("Enter the number:"); 
 scanf("%d",&N);
   double r = sqrt(N);
  printf("The root  of %d is : %.2f",N,r);
    return 0;
 }  
 double findSQRT(int N){ 
    return sqrt(N);
 }