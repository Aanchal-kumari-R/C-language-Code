#include<stdio.h> 

int main(){ 
  
  int i, arr[100],size,item;  

  printf("Enter the size of array:"); 
  scanf("%d",&size);   

  printf("Enter the element in array:");  
   for(i= 0;i<size;i++){ 
    scanf("%d",&arr[i]);
   }   

   printf("Enter the item in array:");  
   scanf("%d",&item); 
   size++;  
   for(i = size; i>1 ;i--){ 
    arr[i-1]= arr[i-2];
   }  
   arr[0]=item;    
 
 printf("The resultant array is :");  
 for(i = 0 ;i<size;i++){ 
    printf("%d\t",arr[i]);
 }
    return 0;
}