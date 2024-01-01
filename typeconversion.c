#include<stdio.h>   

int main(){   
 float myfloat = 10;   // implicit conversion
 printf("%f\n",myfloat);   
   
   float sum = (float)5/2;  // Explicit conversion
   printf("%.2f",sum);
        return 0;
}