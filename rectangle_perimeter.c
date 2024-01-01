#include<stdio.h>  

int main(){ 
  int length; 
  int width;  
  int perimeter;  
  
  printf("Enter the value of length:");  
  scanf("%d",&length);  

  printf("Enter the value of width:");  
  scanf("%d",&width);  

  perimeter = 2*(length+width);   // formula of perimeter   

  printf("The perimeter of rectangle is : %d", perimeter);

    return 0;
}