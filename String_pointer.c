#include<stdio.h> 
 
 int main(){ 
  
  char* canchange = "Aanchal Singh";  
  puts(canchange);  

  canchange = "Goldi Singh"; 
  puts(canchange);  

  char cannotchange[] = "Aanchal Singh";  
  puts(cannotchange); 
  cannotchange = "Goldi Singh"; 
  puts(cannotchange);


    return 0;
 } 