#include<stdio.h>  
  
  int sumDigit(int n);
int main(){   
    int n,sum;  
    printf("Enter the Digit:");  
    scanf("%d",&n);  
    
    sum = sumDigit(n); 

 printf("Sum of all digit is %d = %d",n,sum);


    return 0;
}  
int sumDigit(int n){   
    int r, s=0;  
    while(n!=0){
    r=n%10;  
    s= s+r;  
    n=n/10;
}  
   return s; 
}