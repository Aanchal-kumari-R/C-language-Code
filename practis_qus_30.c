#include<stdio.h> 

float squareArea(float side);  
float circleArea(float radius);  
float rectangleArea(float a, float b); 
 
int main(){  
  
  float a = 5.0;  
  float b = 10.0;  

  printf("The Rectangle area is : %.2f\n",rectangleArea(a,b));  

  float side = 4.0;  
   
   printf("The squate area is : %.2f\n",squareArea(side));  

   float radius = 5.0;  
    
    printf("The circle area is :%.2f\n",circleArea(radius));

    return 0;
}  

float squareArea(float side){  
 return side*side;  
 
}  
float circleArea(float radius){ 
    return 3.14*radius*radius;
}  
float rectangleArea(float a, float b){ 
    return a * b;
}