#include<stdio.h>  
 void namaste();  
 void bonjure();
int main(){   
     printf("Enter f for french and i for indian :");  
    
    char ch;  
    scanf("%c", &ch);  
    if(ch == 'i'){ 
        namaste();
    }  
    else{ 
        bonjure();
    }
  return 0;
}   
void namaste(){ 
    printf("Namaste !");
}   
void bonjure(){ 
    printf("Bonjure");
}

