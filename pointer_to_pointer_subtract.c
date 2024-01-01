#include<stdio.h>  

int main(){  

 /*int age = 33;    // subtraction , difference
 int _age = 23;  
 int  *ptr = &age; 
 int *_ptr = &_age;  

 printf(" %u , %u,difference is %u", ptr,_ptr,ptr - _ptr);  */ 
  
  int age = 33; 
  int _age = 22;  
  int *ptr = &age;  
  int *_ptr = &_age;  

 _ptr = &age; 
 printf("Comparison is %u",ptr == _ptr);
 return 0;
}