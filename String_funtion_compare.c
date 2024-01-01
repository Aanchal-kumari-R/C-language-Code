#include<stdio.h>  
#include<string.h>    
int main(){ 
 
 char name1[] = "Aanchal";  
 char name2[] ="Singh";   

 char firstname[] ="AA"; 
 char secondname[] ="AA";  

 printf("%d\n",strcmp(firstname,secondname));
 
printf("%d \n",strcmp(name2,name1));   
printf("%d",strcmp(name1,name2));

    return 0;
}