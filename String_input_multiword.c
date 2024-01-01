#include<stdio.h> 
 
 void PrintString(char  arr[]);

int main(){ 
  
  char str[50];  


 // gets(str);  
printf("Enter your fullName :\n");  
  fgets(str,50,stdin);  
  puts(str); 

    return 0;
}   

void PrintString(char arr[]){ 
    for(int i = 0;arr[i]!='\0';i++){ 
        printf("%s",arr[i]);
    }
}