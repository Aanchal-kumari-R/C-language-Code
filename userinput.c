#include<stdio.h>  

int main (){  
    int num;   
    char mychar;      

  /*  printf("Enter your number and character :");  
    scanf("%d %c", &num,&mychar);        
      printf(" your number is %d and your Grade is %c :", num, mychar); */   
       
       printf("Enter your number:\n"); 
       scanf("%d",&num);   
       printf("Enter your character:\n");   
       scanf("%c",&mychar);    
       printf(" your number is %d :\n",num);  
       printf("your character is %c :\n",mychar);  

    return 0;
}