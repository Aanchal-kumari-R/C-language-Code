#include<stdio.h> 
int main(){   


 int arr[100], i, max, size ;   

 printf("Enter the size of array :");  
 scanf("%d",&size);  

 printf("Enter the element of array :\n");  
 for(i = 0; i<size; i++){ 
    scanf("%d",&arr[i]);
 }    
  max = arr[0];
 for(i = 0; i<size; i++){ 
  if(arr[i]>max){ 
    max = arr[i];
  }
 }    

 printf("The maximum value is :%d",max); 
    return 0;
}