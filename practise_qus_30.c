#include<stdio.h> 
 
 void calculateprize(float value);
int main(){  
  
  float value = 100;  
  calculateprize(value);  
  printf("Value is :%f\n",value);

    return 0;
}  
void calculateprize(float value){  
    value = value +(0.18 + value);  
    printf("Final price is :%f\n",value); 

}