#include<stdio.h>  
   
   int sqrt();  

int main(){ 
  
  int c;  
   
   c = sqrt(); 
    
    printf("The sum is : %d",c);


  return 0;
}  
int sqrt(){  

int a,b; 
 
 printf("Enter a number:"); 
 scanf("%d",&a);  
   
  b= a*a;  

  return(b); 
}
