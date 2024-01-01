#include<stdio.h>  


int main(){  
    int marks; 
    printf("Enter your marks:");  
    scanf("%d", &marks);  

    if(marks<=30) { 
        printf("your grade is C:\n");
    } 
    if (marks>=31 && marks<=70){ 
        printf("Your grade is B:\n");
    } 
    if(marks >=71 && marks <=90){  
        printf("your grade is A:\n");  
    }  
    if(marks >=91 && marks <=100){ 
        printf("Your grade is A+");
    }    return 0;
}