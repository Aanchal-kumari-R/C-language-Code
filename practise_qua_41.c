#include<stdio.h>  
                                  /* write a program to enter price of items 
                                  and print their final cost with gst*/
int main(){ 
 
 float price[3];  

 printf("Enter price:\n"); 
 scanf("%f",&price[0]); 
 scanf("%f",&price[1]);  
 scanf("%f",&price[2]);    

 printf("final price 0 is %f:\n",(price[0]+(0.18*price[0])));   
 printf("final price 1 is %f:\n",(price [1]+(0.18*price[1])));  
 printf("final price 2 is %f:\n",(price[2]+(0.18*price[2])));


    return 0;
}