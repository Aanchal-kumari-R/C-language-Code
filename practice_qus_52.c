#include<stdio.h>               //write a fnction name slice , which takes a string and 
                                // returns a sliced string form index n to m.
void slice(char str[],int n,int m);
int main(){    
    char str[100] ="HelloWorld";
    slice(str,2,7);

    return 0;
}  
void slice(char str[],int n, int m){   
    char newstr[50];
    int j = 0;  
    for(int i = n;i<=m;i++,j++){ 
        newstr[j]=str[i];
    }  
    newstr[j]='\0'; 
    puts(newstr);
}