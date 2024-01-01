#include<stdio.h> 
   void printStars();
  int main(){ 
   printStars();  
   printf("\nWelcome to c programming \n:");  
   printStars();
    return 0;
  }    
  void printStars(){ 
    for(int i= 1; i<=40; i++){ 
        printf("%c",'*');  
    }
  }