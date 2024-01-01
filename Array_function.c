#include<stdio.h>   
void printNumber(int number[], int n);

int main(){ 

 
 int number[] = {1,2,3,4,5,6}; 
  
  printNumber(number,6);
    return 0;
}  
void printNumber(int number[],int n){ 
    for(int i = 0; i<n; i++){ 
        printf("%d\t", number[i]);
    }
}