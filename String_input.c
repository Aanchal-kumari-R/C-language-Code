#include<stdio.h> 
int main(){   
 
  char firstName[50];  
  char lastName[50];  

  printf("Enter your firstName:");  
  scanf("%s",firstName);  
  
  printf("Enter your lastName:"); 
  scanf("%s",lastName);   

  printf("your First and Last Name  is  : %s %s ",firstName,lastName);


    return 0;
}