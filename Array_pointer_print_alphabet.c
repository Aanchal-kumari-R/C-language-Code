#include<stdio.h> 

int main(){   

char p = 'A';  
char q = 'Z';  

 char *S = &p;   
 char *Q = &q;  

 for(char i = p; i<=q; i++){ 
    printf("%c\t", i);
 }
       
     
    return 0; 
}  

