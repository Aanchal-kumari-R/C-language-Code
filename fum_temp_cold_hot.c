#include<stdio.h>  
   
   void printTemp();

  int main(){ 

  printTemp();

    return 0;
  }    

   void printTemp(){ 

   float temp;  
   printf("Enter the temperature:");  
   scanf("%f",&temp);   
    
    if(temp>=0 && temp<=30){ 
        printf("The weather is cold:");
    }
    else{ 
        printf("The weather is hot:");
    }

   }
