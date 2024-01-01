#include<stdio.h>  

int main(){ 
 
 int i , arr[100], min, size;   

  printf("Enter the size of array:");   
  scanf("%d",&size);   

  printf("Enter the element of array:");  
  for(i= 0; i<size; i++){ 
    scanf("%d",&arr[i]);
  }   

  min = arr[0];
  for(i = 0; i<size ; i++){ 
    if(arr[i]<min){ 
        min = arr[i];
    }
  }  
  printf("Minimum value of array is:%d", min);

    return 0; 
}