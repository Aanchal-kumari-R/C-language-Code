#include<stdio.h> 

  void printChar(char str[],char ch); 

  int main(){ 
  char str[100] ="Aanchal";  
  char ch = 'b';  
  printChar(str,ch);

    return 0;
  }  

  void printChar(char str[],char ch){ 
    for(int i = 0;str[i]!='\0';i++){ 
        if(str[i]==ch){ 
            printf("character is here");  
            return;
        }
    }    
    printf("charcacter is not here:");

  }