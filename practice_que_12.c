#include<stdio.h>  
int main(){ 
  char ch ; 

  printf("Enter character:\n");  
  scanf("%c",&ch);    

  if(ch>='A' && ch<='B'){  
    printf("Character is Uppercase:");
  }  
  if(ch>='a' && ch<= 'z') { 
    printf("Character is Lowercase:");
  }
    return 0;
}