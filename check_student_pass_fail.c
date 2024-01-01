#include<stdio.h>  


int main(){ 
 
 int marks ; 
 printf("Enter your marks:");  
 scanf("%d",&marks); 

 if(marks<=0 && marks >=30){ 
    printf("Your are fail");
 }  
 if(marks>=30 && marks <=100){ 
    printf("You are pass");
 }

    return 0;
}