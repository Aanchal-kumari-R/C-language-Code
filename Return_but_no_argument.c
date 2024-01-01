#include<stdio.h>    

int sum();      
 
 int c ; 
 c= sum();   

 printf("The sum of first and second number is:%d", c);

int main(){ 

    return 0;
}    
int sum(){ 
    int x, y, z;  

    printf("Enter first number:");  
    scanf("%d",&x);  

    printf("Enter second number:");  
    scanf("%d",&y);  

    z= x+y;  
    return(z);
}
