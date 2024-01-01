#include<stdio.h>  


int main(){   
    double num, root;  
    printf("Enter the number:"); 
    scanf("%lf",&num);  

  root = sqrt(num);  
  printf("The sqare root of %.2lf is %.2lf:",num,root);

    return 0;
}