#include<stdio.h>                                               /*write a program to print maximum number 
                                               between two number using a pointer*/
int main(){ 
  
  int a ; 
  int b ;  

  printf("Enter the two number:\n");  
  scanf("%d %d", &a , &b); 

  int *ptr1 = &a;  
  int *ptr2 = &b;        
  
  if(*ptr1>*ptr2){ 
    printf("The greatest number is %d:\n",*ptr1);
  }
 else if(*ptr2>=*ptr1){ 
  printf("The gratest number is %d:",*ptr2);
 }  
 else{ 
   printf("Boths are equal:");
 }

 
  return 0;
}