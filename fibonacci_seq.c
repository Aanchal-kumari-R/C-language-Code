#include<stdio.h> 
  // write a function to print n term of the fibonacci sequence.
 int  fib(int n);
int main  (){ 
  
  printf("fib of n is :%d",fib(6));

    return 0;   
}  

int fib(int n){   
    if(n == 0){ 
        return 0;
    }  
    if(n==1 ){ 
        return 1;
    }
   int  fibNm1 = fib(n-1); 
   int  fibNm2 = fib(n-2);  
   int  fibN = fibNm1 + fibNm2;  

    return fibN;
}