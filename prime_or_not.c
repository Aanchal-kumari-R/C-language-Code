#include<stdio.h>  

int main(){ 
  
  int n, i, count = 0;  

  printf("Enter any number:");  
  scanf("%d",&n);   

  for(int i=1; i<=n; i++){ 
    if(n%i==0){ 
        count++;
    }
  }   
  if(count==2){ 
    printf("This is prime number:");
  }  
  else{ 
    printf("This is not prime number:");
  }

    return 0;
}