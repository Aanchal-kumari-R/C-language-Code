#include<stdio.h>   
 int sum(int x,int y);
int main(){ 
 int a , b, c;  

 printf("Enter first number:"); 
 scanf("%d",&a);  

 printf("Enter second number:"); 
 scanf("%d",&b);    

   c = sum(a,b);    
 
   printf("The sum is : %d", c);

    return 0; 
}  
int sum(int x, int y){ 
    int z= x+y;  
    return (z);
}