#include<stdio.h>  

int main(){   
    int i, min, max, size,arr[100];    

    printf("Enter the size of array :");  
    scanf("%d", &size);       

    printf("Enter the element of  array :\n"); 
    for( i = 0; i<size; i++){ 
        scanf("%d",&arr[i]);
    } 
    
    max = arr[0];  
    for(i = 0; i<size; i++){ 
        if(arr[i]>max){ 
            max = arr[i];
        }
    }
    printf("Maximum value is : %d\n",max);   

    min = arr[0];  
    for(i = 0; i<size; i++){ 
        if(arr[i]<min){ 
            min = arr[i];
        }
    }
     printf("Minimum value is :%d\n",min);

    return 0;
}                                                                                                                           