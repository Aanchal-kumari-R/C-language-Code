#include<stdio.h>  
  int main(){ 

  int myarray[] = {1,2,3,4,5,5,4,3,2,1};  

  int count = 0; 
  int to_find = 4;  

  for(int i = 0; i<10 ; i++){ 
    if(myarray[i] == to_find) 
    count++;
  }

  printf("The number of 4th is : %d", count);
    return 0;
}