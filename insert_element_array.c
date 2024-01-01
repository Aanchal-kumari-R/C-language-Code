#include<stdio.h> 

int main(){  
  
  int i,size,arr[100],item;  

  printf("Enter the size of array:"); 
  scanf("%d",&size);  

  printf("Enter the element of array :"); 
  for(i = 0; i<size;i++){ 
    scanf("%d",&arr[i]);  
  }   
  printf("Enter the item in array:");   
  scanf("%d",&item);   
  size++;
  for(i = size;i>1;i--){   //5,4,3,2
    arr[i-1]=arr[i-2];   //4=3,3==2,2=1,1=0
  }   
  arr[0] =item;    

  printf("The resultant array is:");  
  for(i=0;i<size;i++){ 
    printf("%d\t",arr[i]);
  }

   
     return 0;     
}