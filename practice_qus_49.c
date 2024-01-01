#include<stdio.h> 
int printStringCount(char arr[]);

int main(){      // Make a program that unputs user's name and prints its length
  
  char name[50];  
     
     printf("Enter your name:\n");
    fgets(name,50,stdin);  

    printf("%d",printStringCount(name));

    return 0;
}   
int printStringCount(char arr[]){ 
    int count = 0;  
    for(int i = 0; arr[i]!=0;i++){ 
        count++;
    }  
    return count-1;
}