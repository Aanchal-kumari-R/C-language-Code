#include<stdio.h>  
#include<string.h>   

    struct Student 
  {  
    int roll; 
    float cgpa; 
    char name[];
  };

int main(){ 
  
  struct Student s1;  
  s1.cgpa=80.34;  
  s1.roll = 1;  
  strcpy(s1.name,"Aanchal");
  
  printf("Stucent name = %s\n",s1.name);  
  printf("Student roll no = %d\n",s1.roll);    
  printf("Student cgpa =%f\n",s1.cgpa);  
  
   
   return 0;
  
}