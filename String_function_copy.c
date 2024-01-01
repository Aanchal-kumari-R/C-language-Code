#include<stdio.h> 
#include<string.h>
int main(){ 

  char name1[50] = "Aanchal"; 
  char name2[50] ="Goldi";  

  strcpy(name1,name2); 
  printf("%s",name1);   
     return 0;
}