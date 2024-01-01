#include<stdio.h> 
    
    struct vector{ 
        int x; 
        int y;
    };   

    void calcSum(struct vector v1,struct vector v2,struct vector sum);
  int main(){ 
     
     struct vector v1 = {3,5};  
     struct vector v2 ={6,7};  
     struct vector sum = {0};  

     calcSum(v1,v2,sum);

    return 0;
  }  
      void calcSum(struct vector v1,struct vector v2,struct vector sum){ 

      v1.x = v1.x+v2.x;  
      v2.y = v1.y+v2.y;  

      printf("The sum of x vector is :%d\n",v1.x);  
      printf("The sum of y vector is :%d\n",v2.y);

      }

