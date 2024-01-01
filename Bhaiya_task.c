#include<stdio.h> 
 
 int main(){
int n;  
printf("Enter a number:");  
scanf("%d",&n);  
 
 int y, m, d, e, c;  

  y = n/365;  
  c= n%365;  
  m=c/30;  
  e=c%30;  
  d=e;  

  printf("%d  years, %d months, %d days:",y,m,d);  
   return 0;  
   } 