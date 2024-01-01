#include<stdio.h>  

int main(){ 
 /*  
 int age = 22;  
 int *ptr = &age;  
 int _age = *ptr;  
 
 printf("%d\n",age); 
 printf("%d\n",*ptr);  
 printf("%d\n",_age);    

 */      
 int age = 33;    

 int *ptr = &age;   
  
  // Address
printf("%p\n",*ptr);  
printf("%u\n",&age);  // wrong way;  
printf("%u\n",ptr);
 printf("%u\n",&ptr);
  
  // Value   

  printf("%d\n",age);  
  printf("%d\n",*ptr);  
  printf("%d\n",*(&age));

     return 0;
}