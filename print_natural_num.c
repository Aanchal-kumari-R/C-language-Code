#include<stdio.h>  

int main(){   
    int n ; 
    printf("Enter a number:");  
    scanf("%d",&n);   
    int sum = 0; 
    for(int i = 0 ; i<=n ; i++){ 
        sum = sum+i; 
        printf("%d\n",i);
    }  
    printf("The sum is %d:", sum);
    return 0; 
}