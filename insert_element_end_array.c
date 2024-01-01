#include<stdio.h>  

int main(){  

 int arr[100],i ,size, item;  

  printf("Enter the size of array:");  
  scanf("%d",&size);  

  printf("Enter the element of array:");  
  for(i = 0; i<size; i++){ 
    scanf("%d",&arr[i]);
  }   
   
   printf("insert element in array: ");  
   scanf("%d",&item);  
   size = size+1;     
   arr[size -1] = item;   

  printf("After insertion element at the ending of array :");  

  for(i = 0; i<size; i++){ 
    printf("%d\t", arr[i]);
  }  

    return 0;
}