#include<stdio.h> 

int main(){    
  int start, end , count ;  

  printf("Enter the starting number:");  
  scanf("%d",&start);  

  printf("Enter the ending number:");  
  scanf("%d",&end);  

  for(int i= start; i<=end; i++){ 
    count = 0;  
    for(int j= 1; j<=i; j++){  
      if(i%j==0){ 
      count = count+1;  
    }  
    }  
    if(count == 2){ 
      printf("%d\n",i);
    }
  }    

    return 0; 
}