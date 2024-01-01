#include<stdio.h>  

int main(){  
    char fullName [30];  
    printf("Enter your fullName :");  
    fgets(fullName,sizeof(fullName),stdin);  
    printf(" Hello %s",fullName);    
  return 0; 
  }