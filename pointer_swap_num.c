#include<stdio.h>     
  
void swap(int *x , int *y);  

int main(){ 
  
  int a = 5; int b = 6;  
 /* swap(5,6);  
                                       call by value
   printf(" a is %d & b is %d :",a ,b); */  

   swap(&a,&b);  
   printf("a is %d & b is %d:", a , b);

    return 0;   

}  

void swap(int *x,int *y){ 
     
  /*  int t = x; 
    x = y; 
    y = x;     // call by value;

    printf(" x is %d & y is %d :\n", x ,y); */  
    int t = *x;   
    *x = *y ; 
    *y = t;  
    printf("x is %d & y is %d:\n",x,y);

}