#include<stdio.h>  

int main(){   
    int n; 
    printf("Enter a number:\n"); 
    scanf("%d",&n);  
     
     if(n>=0){ 
        printf("Positive:\n");
     }  
     if(n%2==0){  
        printf("Even number:\n");
     }  
     if(n%2!=0){ 
        printf("Odd number:\n");
     }
     if(n<0){ 
        printf("Negative number:\n");
     }
    return 0;
}