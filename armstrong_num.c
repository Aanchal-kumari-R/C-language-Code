#include<stdio.h>  

int main(){ 
  int  n, arms=0,r,c;   

  printf("Enter your number:"); 
  scanf("%d",&n); 
  c=n; 
  while(n>0){ 
    r=n%10;    // 3   // 5  // 
    arms = (r*r*r)+arms;   //27   // 125+27= 152  // 152+1 = 153
    n = n/10;  //15   //    1  //
  }  
  if(c==arms){ 
    printf("This is armstrong number:\n");
  }  
  else{ 
    printf("This is not armstrong number:\n");
  } 
    return 0;
}