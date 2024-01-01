#include<stdio.h> 
void printarray(int arr[], int n);  

int main(){ 
 
 int arr[] = {1,2,3,4,5};    
 printArray(arr,5); 
 printf("%d\n",*(arr+2));  
 printf("%d\n",*(arr+5));


    return 0; 
}  

void printArray(int arr[], int n){ 
    for(int i = 0;i<n; i++){ 
        printf("%d\n", arr[i]);
    }
}