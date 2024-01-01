#include<stdio.h> 
 
int _square(int *n);
 int main(){ 
  
  int number = 5; 
  _square(&number);  

  printf("The number is :%d\n", number);

  return 0; 
 }  
  
  int _square(int *n){ 
    *n = (*n)*(*n); 
    printf("The square is :%d\n", *n);


  }