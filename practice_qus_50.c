#include<stdio.h> 


int main(){   

char str[100];                // take a string input from the user using %c;
char ch; 
int i = 0;  

while(ch!='\n'){ 
scanf("%c",&ch);   
str[i] =ch; 
i++ ; 
}  
str[i]=ch;  
puts(str);
     return 0;
}