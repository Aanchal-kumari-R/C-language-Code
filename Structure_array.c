#include<stdio.h>  
#include<string.h>  
  
  struct Student { 
    int roll;  
    char name[100]; 
    float cgpa;
  };


int main(){ 
     
     struct Student IT[100];   

     IT[0].roll = 1;  
     IT[0].cgpa = 60.5;  
     strcpy(IT[0].name,"Aanchal");  

     printf("Student roll = %d\n",IT[0].roll);  
     printf("Student cgpa = %.2f\n",IT[0].cgpa);  
     printf("Student name = %s",IT[0].name);


    return 0;
}