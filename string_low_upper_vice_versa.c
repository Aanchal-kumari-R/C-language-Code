#include<stdio.h>  

int main(){ 
  
  int i ; 

  char str[100]="Hello World";  
  i = 0;   

  while(str[i]!='\0'){ 
   
   if(isupper(str[i])){ 
    str[i]=str[i]+32;
   } 
 else if(islower(str[i])){ 
    str[i] = str[i]-32;
  }
    i++;
  }  

  printf("After conversation :%s",str);


    return 0;
}

