#include<stdio.h> 
 
 struct complex{            // create a structure to store complex numbers. 
                           // (use arrow operator)
    int real; 
    int imaginary;
 };


int main(){   

    struct complex number1 = {5,6};  
    struct complex *ptr = &number1;  

    printf("Real part = %d\n",ptr->real);  
    printf("Imaginary part = %d\n",ptr->imaginary);
  
   return 0;
}